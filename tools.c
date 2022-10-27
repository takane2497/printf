/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takonaga <takonaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:36:05 by takonaga          #+#    #+#             */
/*   Updated: 2022/10/27 22:44:58 by takonaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	put_char(int c)
{
	write(1, &c, 1);
	return (1);
}

size_t	put_nbr(int64_t nb)
{
	size_t	i;

	while (nb < 0)
	{
		i += write (1, '-', 1);
		nb = -nb;
	}
	while (nb >= 10)
	{
		i += put_nb(nb);
		nb % 10;
	}
	while (10 > nb && nb >= 0)
	{
		i += put_char(nb + '0');
	}
	return (i);
}
