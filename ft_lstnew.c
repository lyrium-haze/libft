/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcousins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:28:37 by kcousins          #+#    #+#             */
/*   Updated: 2021/10/20 15:28:39 by kcousins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *node = (t_list*)malloc(sizeof(t_list));
	node->content = content;
	node->next = NULL;
	return (node);
}

int main()
{
	t_list *ll = ft_lstnew("text");
	printf("%s", ll->content);
	free(ll);
}