/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:34:24 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 15:34:25 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/***************************************************************
*						FT_SUBSTR:							   *
*	La función ft_substr crea una nueva cadena de caracteres   *
*	a partir de una cadena existente `s`. La nueva cadena      *
*	empieza en la posición `start` y tiene una longitud de     *
*	hasta `len` caracteres. Devuelve un puntero a la nueva     *
*	cadena o NULL si hay un error de asignación de memoria.    *
*															   *
*	Argumentos:												   *
*	s: La cadena de caracteres de la que se creará la nueva    *
*	cadena.													   *
*	start: La posición desde la cual comenzar la nueva cadena. *
*	len: La longitud máxima de la nueva cadena.                *
*															   *
*	Devuelve: Un puntero a la nueva cadena de caracteres o     *
*	NULL si hay un error.									   *
*															   *
\**************************************************************/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (!s)
		return (NULL);
	else if (start >= ft_strlen(s))
		return (ft_strdup(""));
	else if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	new = (char *)malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s + start, len + 1);
	return (new);
}
/*
int main(void)
{
    char str[] = "como estatuhermana";
    char *result = ft_substr(str, 5, 8);

    printf("elmio---> %s\n", result);
    free(result);

    return 0;
}
*/
