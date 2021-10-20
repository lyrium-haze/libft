/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcousins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 22:39:47 by kcousins          #+#    #+#             */
/*   Updated: 2021/10/08 22:39:51 by kcousins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	j;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (start < ft_strlen(s) && j < len && j < ft_strlen(s))
		j++;
	sub = (char *)malloc(j + 1);
	if (sub == NULL)
		return (NULL);
	j = 0;
	while (start < ft_strlen(s) && j < len && j < ft_strlen(s))
	{
		if (i < start)
			i++;
		else
			sub[j++] = s[i++];
	}
	sub[j] = '\0';
	return (sub);
}
