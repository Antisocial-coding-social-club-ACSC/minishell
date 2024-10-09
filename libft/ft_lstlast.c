/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:44:11 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/17 10:50:28 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*d;

	if (!lst)
		return (lst);
	d = lst;
	while (d->next)
	{
		d = d->next;
	}
	return (d);
}
/*
 int main(void)
 }	
 	t_list *d;
	d = ft_lstnew("hola");
	d->next = ft_lstnew("buenas");
	d->next->next = ft_lstnew("familia");
	d->next->next->next = ft_lstnew("bien");
	ft_lstlast(d);
	printf("%s\t", (char *)d->content);
	free(d);
	return (0);
}*/
