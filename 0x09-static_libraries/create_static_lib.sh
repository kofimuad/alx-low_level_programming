#!/bin/bash

# Name of the static library
LIB_NAME="liball.a"

# Creating an empty static library
ar -rc ${LIB_NAME}

# Compiling each C file in the current directory and adding it to the static library
for file in *.c; do
    # Compile the file into an object file
    gcc -c "${file}"
    
    # Extract the filename without extension
    object_file=$(basename "${file}" .c).o

    # Add the object file to the static library
    ar -rs ${LIB_NAME} "${object_file}"

    # Optionally remove the object file to clean up
    rm "${object_file}"
done

echo "Static library ${LIB_NAME} created successfully."
