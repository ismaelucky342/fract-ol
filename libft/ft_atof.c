#include "libft.h"

double	ft_atof(char *str)
{
	int		i;
	double	nb;
	int		is_neg;
	double	div;

	nb = 0;
	div = 0.1;
	is_neg = 1;

	// Skipping leading spaces and detecting sign
	while (*str == ' ' || *str == '+' || *str == '-')
	{
		if (*str == '-')
			is_neg = -1;
		str++;
	}

	// Parsing integer part
	while (*str && ft_isdigit(*str) && *str != '.')
	{
		nb = (nb * 10.0) + (*str - '0');
		str++;
	}

	// Handling decimal part
	if (*str == '.')
		str++; // Move past the decimal point

	while (*str && ft_isdigit(*str))
	{
		nb = nb + ((*str - '0') * div);
		div *= 0.1;
		str++;
	}

	// If there are remaining characters and they are not digits, return error
	if (*str && !ft_isdigit(*str))
		return (-42);

	return (nb * is_neg);
}
