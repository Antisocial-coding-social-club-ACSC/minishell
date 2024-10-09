/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:42:45 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/17 13:45:06 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
		ft_lstlast(*lst)->next = new;
}
/*
int main(void)
{
	t_list *d = ft_lstnew("0");
	d->next = ft_lstnew("1");
	t_list *s = ft_lstnew("2");
	ft_lstadd_back(&d, s);
	while (d)
	{
		printf("%s\t", (char *)d->content);
		d = d->next;
	}
	free(d);
	free(s);
	return (0);
}*/
