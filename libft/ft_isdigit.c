/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:32:30 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 15:32:31 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**************************************************************
*						FT_ISDIGIT:							  *
*	La función ft_isdigit se utiliza para determinar si       *
*	un carácter representa un dígito decimal. Devuelve 1      *
*	si el carácter es un dígito (0-9) y 0 si no lo es.		  *
*															  *
*	Argumentos:												  *
*	c: Un valor de tipo int que representa un carácter.		  *
*															  *
\*************************************************************/
int	ft_isdigit(int c)
{
	return ((c >= 48) && (c <= 57));
}
/*
int main(void)
{
    int check = '4';
    if (ft_isdigit(check) == 1)
    {
        printf("it's a numeric character");
        return (0);
    }
    printf("its not");

    return (0);
}*/
