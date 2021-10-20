/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcousins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:45:30 by kcousins          #+#    #+#             */
/*   Updated: 2021/10/12 20:45:32 by kcousins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cntchr(int nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		count++;
	}
	if (nbr >= 10)
	{
		while (nbr >= 10)
		{
			nbr = nbr / 10;
			count++;
		}
		count++;
	}
	else
	{
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		count;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = ft_cntchr(n);
	result = (char *)malloc((count + 1) * sizeof(char));
	if (result == NULL)
		return (result);
	result[count] = '\0';
	if (n < 0)
	{
		n = -n;
		result[0] = '-';
	}
	count--;
	while (n >= 10)
	{
		result[count] = (n % 10) + '0';
		count--;
		n = n / 10;
	}
	if (n < 10)
		result[count] = n + '0';
	return (result);
}
