/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcousins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:51:10 by kcousins          #+#    #+#             */
/*   Updated: 2021/10/08 13:51:13 by kcousins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	if (c == '\0')
	{
		return (str + ft_strlen(str));
	}
	while (str[i] + 1 && str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}
