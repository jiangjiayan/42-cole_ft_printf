/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjiayan <jiayanjiangfr@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:20:00 by jjiayan           #+#    #+#             */
/*   Updated: 2024/12/03 12:34:27 by jjiayan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	convert_to_hex(unsigned int num, char *buffer, int uppercase)
{
	const char	*hex_digits;
	int			i;

	i = 0;
	if (uppercase)
	{
		hex_digits = "0123456789ABCDEF";
	}
	else
		hex_digits = "0123456789abcdef";
	if (num == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		while (num > 0)
		{
			buffer[i++] = hex_digits[num % 16];
			num /= 16;
		}
	}
	buffer[i] = '\0';
	return (i);
}

int	print_hex_lower(unsigned int num)
{
	char	buffer[32];
	int		length;

	length = convert_to_hex(num, buffer, 0);
	reverse_string(buffer, length);
	write(1, buffer, strlen(buffer));
	return (length);
}

int	print_hex_upper(unsigned int num)
{
	char	buffer[32];
	int		length;

	length = convert_to_hex(num, buffer, 1);
	reverse_string(buffer, length);
	write(1, buffer, strlen(buffer));
	return (length);
}
