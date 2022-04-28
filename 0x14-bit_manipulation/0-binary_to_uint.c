/**
 * get_pow - get base raised to power
 * @base: base
 * @pow: number of times to multilpy base by itself
 * Return: base raised to power
 */
unsigned int get_pow(unsigned int base, int pow)
{
	if (pow == 0)
		return (1);
	return (base * get_pow(base, pow - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, 0 if there is one or more chars
 * in the string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int pow = 0;
	unsigned int num = 0;
	unsigned int base = 2;
	int i = 0;

	if (!(b))
		return (0);

	while (b[i])
	{
		if (b[i] == '1' || b[i] == '0')
			pow++;
		else
			return (0);
		i++;
	}
	pow--;
	i = 0;
	while (b[i])
	{
		if (b[i] == '1')
		{
			num += get_pow(base, pow);
			pow--;
		}
		else
			pow--;

		i++;
	}
	return (num);
}
