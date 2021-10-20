/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcousins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:36:24 by kcousins          #+#    #+#             */
/*   Updated: 2021/10/09 14:36:26 by kcousins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*scp;
	int		i;

	scp = NULL;
	scp = (char *)malloc(ft_strlen(s1) + 1);
	if (scp == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		scp[i] = s1[i];
		i++;
	}
	scp[i] = '\0';
	return (scp);
}
