/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takonaga <takonaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:03:21 by takonaga          #+#    #+#             */
/*   Updated: 2022/10/29 04:12:53 by takonaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_formats(va_list ap, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += print_char(va_arg(ap, int));
	else if (format == 's')
		len += print_str(va_arg(ap, char *));
	else if (format == 'p')
		len += print_pointer(va_arg(ap, uint64_t));
	else if (format == 'd' || format == 'i')
		len += print_nbr(va_arg(ap, int));
	else if (format == 'u')
		len += print_nbr(va_arg(ap, unsigned int));
	else if ((format == 'x' || format == 'X' ))
		len += print_hex(va_arg(ap, unsigned int), format);
	else if (format == '%')
		len += print_percent();
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	ap;
	int		len;

	i = 0;
	len = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += check_formats(ap, format[i + 1]);
			i++;
		}
		else
			len += put_char(format[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
