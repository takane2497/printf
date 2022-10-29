/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takonaga <takonaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 07:04:27 by takonaga          #+#    #+#             */
/*   Updated: 2022/10/29 07:42:56 by takonaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*new;

	if (count == 0 || size == 0)
		return (ft_calloc(1, 1));
	if (SIZE_MAX / size < count)
		return (NULL);
	new = malloc(size * count);
	if (new == NULL)
		return (NULL);
	ft_bzero(new, size * count);
	return ((void *)new);
}
