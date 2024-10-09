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

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

/*
void	may(void *d)
{
	printf("%s\n", (char *)d);
}
int main(void)
{
	t_list *d;
	t_list *pd;
	char *str;
	char *str2;
	char *str3;

	str = ft_strdup("amimegustanlasgorditas");
	str2 = ft_strdup("porqueinviernodancalor");
	str3 = ft_strdup("yenveranodanzombritaoleee");
	d = ft_lstnew(str);
	d->next = ft_lstnew(str2);
	d->next->next = ft_lstnew(str3);
	
	pd = d;
	printf("original--> \t");
	while (pd)
	{
		printf("%s\t", (char *)pd->content);
		pd = pd->next;
	}
	printf("\n");
	ft_lstiter(d, may);
	printf("\n");
	printf("resultado--->\t");
	while (d)
	{
		printf("%s\t", (char *)d->content);
		d = d->next;
	}
	free(str);
	free(str2);
	free(str3);
	free(d);
	return  (0);
}*/
