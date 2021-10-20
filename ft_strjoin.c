/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcousins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 20:44:11 by kcousins          #+#    #+#             */
/*   Updated: 2021/10/10 20:44:19 by kcousins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*uns;
	int		len;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	uns = NULL;
	uns = (char *)malloc(len);
	if (uns == NULL)
		return (NULL);
	while (s1[i])
	{
		uns[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		uns[i++] = s2[j++];
	}
	uns[i] = '\0';
	return (uns);
}
