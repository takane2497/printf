/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takonaga <takonaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 03:28:42 by takonaga          #+#    #+#             */
/*   Updated: 2022/10/29 07:03:30 by takonaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	pointer_len(uintptr_t nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb = nb / 16;
	}
	return (len);
}

static	void	put_pointer(uintptr_t nb)
{
	if (nb >= 16)
	{
		put_pointer(nb / 16);
		put_pointer(nb % 16);
	}
	else
	{
		if (nb <= 9)
			put_char(nb + '0');
		else
			put_char(nb - 10 + 'a');
	}
}

int	print_pointer(uint64_t pointer)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (pointer == 0)
		len += write(1, "0", 1);
	else
	{
		put_pointer(pointer);
		len += pointer_len(pointer);
	}
	return (len);
}
