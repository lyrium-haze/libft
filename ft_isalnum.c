/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcousins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 23:27:59 by kcousins          #+#    #+#             */
/*   Updated: 2021/10/04 23:28:02 by kcousins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	a;
	int	b;

	a = ft_isalpha(c);
	b = ft_isdigit(c);
	if (a != 0 || b != 0)
	{
		return (1);
	}
	return (0);
}
