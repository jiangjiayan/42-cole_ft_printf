/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjiayan <jiayanjiangfr@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:06:43 by jjiayan           #+#    #+#             */
/*   Updated: 2024/12/03 12:32:52 by jjiayan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_putstr(char const *str);
int		print_pointer(void *ptr);
int		print_int(int num);
void	reverse_string(char *buffer, int length);
int		print_unsigned(unsigned int num);
int		print_hex_lower(unsigned int num);
int		print_hex_upper(unsigned int num);
int		ft_printf(const char *format, ...);

#endif
