/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:34:27 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 15:34:28 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/***************************************************************
*						FT_TOLOWER:							   *
*	La función ft_tolower convierte un carácter en mayúscula   *
*	a su equivalente en minúscula si es una letra mayúscula.   *
*	De lo contrario, devuelve el mismo carácter.               *
*															   *
*	Argumentos:												   *
*	c: El carácter que se convertirá a minúscula si es una     *
*	   letra mayúscula.										   *
*															   *
*	Devuelve: El carácter convertido a minúscula o el mismo    *
*	carácter si no es una letra mayúscula.					   *
*															   *
\**************************************************************/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	return (c);
}
/*
int main(void)
{
    int c = 'Z';
    printf("la letra es: %c", ft_toupper(c));
    return (0);
}*/
