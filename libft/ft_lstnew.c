/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:14:43 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/16 15:46:08 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
void	print_list(t_list *node)
{
	while (node)
	{
		printf("node----> %s\n", (char *)node->content);
		node = node->next;
	}
}

int main(void)
{
	t_list *d;
	d = ft_lstnew("hola");
	d->next = ft_lstnew("7227");
	d->next->next = ft_lstnew("hoalhoasdjasdl");
	print_list(d);
}*/
