/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:33:37 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 15:33:39 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**************************************************************
*						FT_STRJOIN:							  *
*	La función ft_strjoin concatena dos cadenas de caracteres *
*	(s1 y s2) en una nueva cadena de caracteres.              *
*	Devuelve un puntero a la nueva cadena concatenada o NULL  *
*	en caso de error de asignación de memoria.                *
*															  *
*	Argumentos:												  *
*	s1: La primera cadena de caracteres que se concatenará.   *
*	s2: La segunda cadena de caracteres que se concatenará.   *
*															  *
\*************************************************************/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*restr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	i = (size_t)ft_strlen(s1);
	j = (size_t)ft_strlen(s2);
	restr = (char *)malloc(sizeof(char) * (i + j + 1));
	if (!restr)
		return (NULL);
	i = -1;
	while (s1[++i])
		restr[i] = s1[i];
	j = 0;
	while (s2[j])
		restr[i++] = s2[j++];
	restr[i] = '\0';
	return (restr);
}
/*
int main(void)
{
    char const s1[] = "hola buenas";
    char const s2[] = "eso es";
    char *result = ft_strjoin(s1, s2);
    printf("string final: %s", result);
    free(result);

    return (0);
}*/
