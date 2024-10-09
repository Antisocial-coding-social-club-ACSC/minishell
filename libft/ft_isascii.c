/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:32:25 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 15:32:26 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**************************************************************
*						  FT_ISASCII:						  *
*	La función ft_isascii se utiliza para determinar		  *
*	si un valor de tipo int representa un carácter ASCII      *
*	válido. Devuelve 1 si el valor está en el rango 0-127     *
*	(inclusive), que es el rango de los caracteres ASCII,     *
*	y 0 en caso contrario.									  *
*															  *
*	Argumentos:												  *
*	c: Un valor de tipo int que se verifica como carácter	  *
*	ASCII válido.											  *
*															  *
\*************************************************************/
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int main(void)
{
		char check = 23;
		if (ft_isascii(check) == 1)
    {
        printf("it's an ascii character");
        return (0);
    }
    printf("its not an ascii");

    return (0);
}*/
