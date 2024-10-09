/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:42:31 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 12:42:36 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;
	void	*cont;

	if (!f || !lst || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		cont = f(lst->content);
		temp = ft_lstnew(cont);
		if (!temp)
		{
			del(cont);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
}
/*
void del(t_list *content)
{
	free(content);
}
void *convert_may(void *content)
{
	char *cadena = (char *)content;
	size_t len = ft_strlen(cadena);
	for (size_t i = 0; i < len; i++)
	{
		if (cadena[i] >= 'a' && cadena[i] <= 'z')
		{
			cadena[i] = (int)ft_toupper(cadena[i]);
		}
	}
	return ((void *)cadena);
}

int main(void)
{
	t_list *lista = NULL;
    t_list *elemento1 = ft_lstnew(ft_strdup("Elemento 1"));
    t_list *elemento2 = ft_lstnew(ft_strdup("Elemento 2"));
    t_list *elemento3 = ft_lstnew(ft_strdup("Elemento 3"));

    ft_lstadd_back(&lista, elemento1);
    ft_lstadd_back(&lista, elemento2);
    ft_lstadd_back(&lista, elemento3);
    t_list *nueva_lista = ft_lstmap(lista, convert_may, del);

    t_list *nodo = nueva_lista;
    while (nodo) {
        printf("Contenido de la nueva lista: %s\n", (char *)nodo->content);
        nodo = nodo->next;
    }
    ft_lstclear(&nueva_lista, del);
    return (0);
}*/
