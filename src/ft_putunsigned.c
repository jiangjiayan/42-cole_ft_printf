/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjiayan <jiayanjiangfr@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:33:33 by jjiayan           #+#    #+#             */
/*   Updated: 2024/12/03 12:37:02 by jjiayan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	convert_unsigned_to_string(unsigned int num, char *buffer)
{
	int	i;	

	i = 0;
	if (num == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		while (num > 0)
		{
			buffer[i++] = (num % 10) + '0';
			num /= 10;
		}
	}
	buffer[i] = '\0';
	return (i);
}

int	print_unsigned(unsigned int num)
{
	char	buffer[32];
	int		length;

	length = convert_unsigned_to_string(num, buffer);
	reverse_string(buffer, length);
	write(1, buffer, strlen(buffer));
	return (length);
}
