/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:48:57 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/16 15:46:05 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main(void)
{
    t_list *lista = NULL;

    t_list *elemento1 = ft_lstnew("Elemento 1");
    t_list *elemento2 = ft_lstnew("Elemento 2");
    t_list *elemento3 = ft_lstnew("Elemento 3");

    ft_lstadd_front(&lista, elemento3);
    ft_lstadd_front(&lista, elemento2);
    ft_lstadd_front(&lista, elemento1);

    t_list *current = lista;
    while (current)
	{
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    free(elemento1);
    free(elemento2);
    free(elemento3);

    return 0;
}*/
