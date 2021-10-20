/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcousins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:08:41 by kcousins          #+#    #+#             */
/*   Updated: 2021/10/09 12:08:44 by kcousins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		result;
	int		minus;

	i = 0;
	minus = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		minus = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]) == 1)
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (result == 0)
		return (0);
	return (result *= minus);
}
