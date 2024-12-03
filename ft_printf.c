/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjiayan <jiayanjiangfr@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:05:44 by jjiayan           #+#    #+#             */
/*   Updated: 2024/12/03 12:46:06 by jjiayan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	ft_format(char format, va_list ap)
{
	int	count;

	count = 0;
	if (format == '%')
		count += ft_putchar_fd('%', 1);
	else if (format == 'c')
		count += ft_putchar_fd(va_arg(ap, int), 1);
	else if (format == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (format == 'd' || format == 'i')
		count += print_int(va_arg(ap, int));
	else if (format == 'p')
		count += print_pointer(va_arg(ap, void *));
	else if (format == 'u')
		count += print_unsigned(va_arg(ap, unsigned int));
	else if (format == 'x')
		count += print_hex_lower(va_arg(ap, ssize_t));
	else if (format == 'X')
		count += print_hex_upper(va_arg(ap, ssize_t));
	return (count);
}

int	ft_handle_null(void)
{
	ft_putstr_fd("null", 1);
	return (-1);
}

int	ft_process_format(const char *format, va_list ap)
{
	int	count;

	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_format(*format, ap);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			count++;
		}
		format++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	if (!format)
		return (ft_handle_null());
	va_start(ap, format);
	count = ft_process_format(format, ap);
	va_end(ap);
	return (count);
}
