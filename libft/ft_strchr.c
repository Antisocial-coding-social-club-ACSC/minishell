/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:33:19 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 15:33:20 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************
*						FT_STRCHR:							  *
*	La función ft_strchr busca la primera aparición de un     *
*	carácter (c) en una cadena de caracteres (s).             *
*	Devuelve un puntero al carácter encontrado o NULL si el   *
*	carácter no se encuentra en la cadena.                    *
*															  *
*	Argumentos:												  *
*	s: La cadena de caracteres en la que se realizará la      *
*	búsqueda.												  *
*	c: El carácter que se buscará en la cadena.               *
*															  *
\*************************************************************/
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (0);
}
/*
int main(void)
{

    char str[] = "como estan los maquinas";
    printf("original---> %s\n", strchr(str, 'a'));
    printf("elmio------> %s\n", ft_strchr(str, 'a'));

    return (0);
}*/
