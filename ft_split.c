/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcousins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:16:48 by kcousins          #+#    #+#             */
/*   Updated: 2021/10/11 16:16:51 by kcousins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_getwnbr(char *s, char c)
{
	int	i;
	int	wcount;

	i = 0;
	wcount = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			wcount++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (wcount);
}

static int	ft_alloc_wrd(char **w, int wc, int len)
{
	int	k;

	k = 0;
	w[wc] = (char *)malloc((len + 1) * sizeof(char));
	if (w[wc] == NULL)
	{
		while (k < wc)
		{
			free(w[k]);
			k++;
		}
		free (w);
		return (0);
	}
	else
	{
		return (1);
	}
}

static int	ft_getlen(char *s, char c, int i)
{
	int	len;
	int	j;

	len = 0;
	j = 0;
	while (s[i + len] && s[i + len] != c)
		len++;
	return (len);
}

static void	ft_getwarr(char *s, char c, char **words, int wcount)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 0;
			len = ft_getlen(s, c, i);
			if (ft_alloc_wrd(words, wcount, len) == 0)
				return ;
			while (j < len)
			{
				words[wcount][j] = s[i];
				i++;
				j++;
			}
			words[wcount][j] = '\0';
			wcount++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		wcount;

	if (s == NULL)
		return (NULL);
	wcount = ft_getwnbr((char *)s, c);
	words = (char **)malloc((wcount + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	words[wcount] = (char *)(void *)0;
	wcount = 0;
	ft_getwarr((char *)s, c, words, wcount);
	if (words == NULL)
		return (NULL);
	return (words);
}
