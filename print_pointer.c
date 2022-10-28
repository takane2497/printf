/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pointer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takonaga <takonaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 03:28:42 by takonaga          #+#    #+#             */
/*   Updated: 2022/10/29 04:01:46 by takonaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	hex(uint64_t nb)
{
	
}

int	put_pointer(uint64_t nb)
{
	int	len;

	len = 0;
	put_str("0x");
	len += 2;

	if (!nb)
	{
		put_char('0');
		return (len++);
	}
	len += hex(nb);
	return (len);
}
