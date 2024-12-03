/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjiayan <jiayanjiangfr@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:18:52 by jjiayan           #+#    #+#             */
/*   Updated: 2024/12/03 12:35:40 by jjiayan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	convert_to_hex(uintptr_t num, char *buffer)
{
	const char	*hex_digits = "0123456789abcdef";
	int			i;

	i = 0;
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
	reverse_string(buffer, i);
	buffer[i] = '\0';
}

int	print_pointer(void *ptr)
{
	uintptr_t	add;
	char		hex_buffer[32];
	int			count;

	count = 0;
	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	add = (uintptr_t)ptr;
	convert_to_hex(add, hex_buffer);
	write(1, "0x", 2);
	count += 2;
	write(1, hex_buffer, strlen(hex_buffer));
	count += strlen(hex_buffer);
	return (count);
}
