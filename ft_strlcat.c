/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcousins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 23:43:13 by kcousins          #+#    #+#             */
/*   Updated: 2021/10/06 23:43:16 by kcousins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	j = dstlen;
	if (dstsize - 1 < dstlen || dstsize == 0)
	{
		return (dstsize + srclen);
	}
	while (j < dstsize - 1 && src[i])
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dstlen + srclen);
}
