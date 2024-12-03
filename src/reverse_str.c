/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjiayan <jiayanjiangfr@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:13:09 by jjiayan           #+#    #+#             */
/*   Updated: 2024/12/02 19:55:31 by jjiayan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	reverse_string(char *buffer, int length)
{
	int		j;
	char	temp;

	j = 0;
	while (j < length / 2)
	{
		temp = buffer[j];
		buffer[j] = buffer[length - j - 1];
		buffer[length - j - 1] = temp;
		j++;
	}
}
