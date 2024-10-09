/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:33:29 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 15:33:30 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**************************************************************	
*						FT_STRITERI:						  *
*	La función ft_striteri aplica una función (f) a cada      *
*	carácter de una cadena de caracteres (s), pasando la      *
*	posición del carácter como primer argumento.              *
*															  *	
*	Argumentos:												  *
*	s: La cadena de caracteres en la que se aplicará la       *
*	función.												  *
*	f: La función que se aplicará a cada carácter, tomando    *
*	la posición del carácter como primer argumento y el       *
*	puntero al carácter como segundo argumento.               *
*															  *
\*************************************************************/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
static void	 f(unsigned int i, char *c)
{
	printf("resultado---> %s", c);
	printf("lenght---> %d", i);
}
	
int main (void)
{
	char *s = "comoestatuhermana";
	ft_striteri(s, f);

	return (0);
}*/
