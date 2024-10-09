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

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while ((*lst))
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = temp;
	}
}
/*
void	ft_del(void *content)
{
	free (content);
}

int    main(void)
{
    t_list    *ato;

    ato = ft_lstnew("nodo1");
    ato->next = ft_lstnew("nodo2");
    ato->next->next = ft_lstnew("nodo3");

    while (ato)
    {
        printf("Ato pre eliminacion-> %s\n", (char *)ato->content);
        ato = ato->next;
    }
    ft_lstclear(&ato, ft_del);
    if (!ato)
        printf("la lista ha sido eliminada y esta vacia\n");
    return (0);
}*/
