/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcousins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:04:22 by kcousins          #+#    #+#             */
/*   Updated: 2021/10/17 16:44:32 by kcousins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*from;
	unsigned char	*to;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	from = (unsigned char *)src;
	to = dst;
	if (src >= dst)
	{
		to = ft_memcpy(dst, src, len);
	}
	if (src < dst)
	{
		while (len--)
		{
			to[len] = from[len];
		}
	}
	return ((void *)to);
}
