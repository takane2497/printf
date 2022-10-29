/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takonaga <takonaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:05:14 by takonaga          #+#    #+#             */
/*   Updated: 2022/10/29 07:47:53 by takonaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
int		put_char(int c);
int		print_str(char *str);
int		print_pointer(uint64_t pointer);
int		put_nb(int nb);
int		print_unsigned(unsigned int n);
int		print_hex(unsigned int nb, const char format);
int		put_percent(void);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *buf, int ch, size_t n);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_itoa(int n);

#endif