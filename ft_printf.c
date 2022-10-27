/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takonaga <takonaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:03:21 by takonaga          #+#    #+#             */
/*   Updated: 2022/10/27 22:44:42 by takonaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_formats(va_list ap, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')

	else if (format == 's')

	else if (format == 'p')

	else if (format == 'd' || format == 'i')

	else if (format == 'u')

	else if ((format == 'x'||format == 'X' ))

	else if (format == '%')
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	size_t	len;
	size_t	i;

	if (format == NULL)
		return (-1);
	len = 0;
	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		if (format[i++] == '%')
			len += check_formats(ap, format[i + 1]);
		else
			len += put_char(format[i]);
		i++;
	}
	va_end(ap);
	return ((int)len);
}
