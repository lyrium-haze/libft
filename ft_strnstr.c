/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcousins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:28:05 by kcousins          #+#    #+#             */
/*   Updated: 2021/10/08 19:28:07 by kcousins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	ndlen;
	char	*hs;

	if (needle[0] == '\0')
		return ((char *) haystack);
	i = 0;
	ndlen = ft_strlen(needle);
	if (ft_strlen(haystack) < ndlen || len < ndlen || len == 0)
		return (NULL);
	hs = (char *)haystack;
	while (i < len && i < ft_strlen(haystack))
	{
		if (hs[i] == needle[0])
		{
			if (ft_strncmp(&hs[i], needle, ndlen) == 0)
			{
				if ((i + ndlen) > len)
					return (NULL);
				return (&hs[i]);
			}
		}
		i++;
	}
	return (NULL);
}
