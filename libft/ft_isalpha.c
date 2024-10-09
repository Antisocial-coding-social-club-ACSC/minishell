/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:32:19 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 15:32:22 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**********************************************************
*						 FT_ISALPHA:					  *
*	La función ft_isalpha se utiliza para determinar	  *
*	si un carácter es una letra del alfabeto. Devuelve 1  *
*	si el carácter es una letra (mayúscula o minúscula)   *
*	y 0 si no lo es.									  *
*														  *
*	Argumentos:											  *
*	c: Un valor de tipo int que representa un carácter,	  *
*	generalmente en forma de su valor ASCII.			  *
*														  *
\*********************************************************/
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
int main(void)
{
    char check = 'a';
    if (ft_isalnum(check) == 1)
    {
        printf("it's an alphanumeric number");
        return (0);
    }
    printf("its nos an alhp");

    return (0);
}*/
