/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:33:23 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 15:33:27 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**************************************************************
*						FT_STRDUP:							  *
*	La función ft_strdup duplica una cadena de caracteres     *
*	(str) en una nueva cadena de caracteres.                  *
*	Devuelve un puntero a la nueva cadena duplicada o NULL    *
*	en caso de error de asignación de memoria.                *
*															  *
*	Argumentos:												  *
*	str: La cadena de caracteres que se duplicará.            *
*															  *
\*************************************************************/
char	*ft_strdup(const char *str)
{
	char	*cpy;

	cpy = (char *)malloc(ft_strlen(str) + 1);
	if (!cpy)
		return (0);
	ft_memcpy(cpy, str, ft_strlen(str) + 1);
	return (cpy);
}
/*
int main(void)
{
    const char str[] = "hola";
    char *result = ft_strdup(str);
    printf("elmio---> %s", result);
    free(result);

    return (0);
}*/
