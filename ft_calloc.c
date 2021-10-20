/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcousins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:58:35 by kcousins          #+#    #+#             */
/*   Updated: 2021/10/09 13:58:37 by kcousins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alm;

	alm = NULL;
	alm = malloc(count * size);
	if (alm == NULL)
	{
		return (NULL);
	}
	ft_bzero(alm, count * size);
	return (alm);
}
