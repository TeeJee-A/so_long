/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:31:04 by ataji             #+#    #+#             */
/*   Updated: 2022/03/30 00:21:53 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print(char a, char b, va_list ptr)
{
	int	k;

	k = 0;
	if (a == '%' && b == '%')
		k += ft_printchar('%');
	else if (a == '%' && (b == 'd' || b == 'i'))
		k += ft_printnbr(va_arg (ptr, int));
	else if (a != '%')
		k = ft_printchar(a);
	else
		return (-1);
	return (k);
}

int	ft_print_format(char *format, va_list ap)
{
	int	i;
	int	j;

	j = 0;
	while (*format)
	{
		i = ft_print(*format, *(format + 1), ap);
		if (i == -1)
			return (j);
		j += i;
		if (*format == '%')
			format++;
		format++;
	}
	return (j);
}

int	ft_printf(const char *format, ...)
{
	int		k;
	va_list	ap;

	va_start(ap, format);
	k = ft_print_format((char *)format, ap);
	va_end(ap);
	return (k);
}
