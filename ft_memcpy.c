/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcousins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:22:50 by kcousins          #+#    #+#             */
/*   Updated: 2021/10/06 12:23:03 by kcousins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*from;
	unsigned char	*to;

	if (!dst && !src)
	{
		return (NULL);
	}
	if (n == 0)
	{
		return (dst);
	}
	i = 0;
	from = (unsigned char *)src;
	to = (unsigned char *)dst;
	while (i < n)
	{
		to[i] = from[i];
		i++;
	}
	dst = (void *)to;
	return (dst);
}
