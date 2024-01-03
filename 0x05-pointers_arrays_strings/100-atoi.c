/**
 * _atoi - convert a string to an integer.
 * @s: The string to be converted.
 *
 * Description: Converts a string to an integer taking into account
 * all the '-' and '+' signs before the number. If there are no numbers
 * in the string, the function returns 0. Does not use long, does not
 * declare new array variables, and does not hard-code special values.
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1; /* Positive by default */

	/* Iterate over the string */
	while (*s)
	{
		/* Check for minus sign */
		if (*s == '-')
		{
			sign *= -1;
		}

		/* Process digits */
		if (*s >= '0' && *s <= '9')

		{
			/* Convert digit character to integer and add to result */
			result = result * 10 + (*s - '0');

			/* Check next character to determine if digit sequence continues */
			if (*(s + 1) < '0' || *(s + 1) > '9')
			{
				break;
			}
		}
		s++;
	}
	return (result * sign); /* Apply the sign */
}
