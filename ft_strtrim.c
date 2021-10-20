/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcousins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 22:12:10 by kcousins          #+#    #+#             */
/*   Updated: 2021/10/10 22:12:13 by kcousins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_trimming(char *trs, char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	size_t			slen;

	i = 0;
	j = 0;
	slen = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != NULL && s1[i])
		i++;
	while (s1[i] && i < slen + 1)
	{
		if (trs != NULL)
			trs[j] = s1[i];
		i++;
		j++;
		while (ft_strchr(set, s1[slen]) != NULL)
			slen--;
	}
	if (i == j && slen + 1 == ft_strlen(s1))
		return (-1);
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trs;
	int				size;

	trs = NULL;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	size = ft_trimming(trs, s1, set);
	if (size == -1)
		return (ft_strdup(s1));
	trs = (char *)malloc((size + 1) * sizeof(char));
	if (trs == NULL)
		return (NULL);
	ft_trimming(trs, s1, set);
	trs[size] = '\0';
	return (trs);
}
