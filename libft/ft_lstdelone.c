/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:42:04 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 15:36:26 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}
/*
void	del(void *content)
{
	free(content);
}

int main(void)
{
	t_list *d;
	d = ft_lstnew("hola");
	d->next = ft_lstnew("bones");
	t_list *s = d;
	while (s)
	{
		printf("%s\t", (char *)s->content);
		s = s->next;
	}
	printf("\n");
	ft_lstdelone(d, del);
	while(d)
	{
		printf("%s\t", (char *)d->content);
		d = d->next;
	}	
	free (d);
	return (0);
}*/
