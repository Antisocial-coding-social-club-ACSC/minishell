/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:32:51 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 15:32:52 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**************************************************************
*						FT_MEMMOVE:							  *
*	La función ft_memmove copia len bytes de una zona de      *
*	memoria origen (src) a una zona de memoria destino (dst), *
*	posiblemente solapándose. Devuelve un puntero a la zona   *
*	de memoria destino.                                       *
*															  *
*	Argumentos:												  *
*	dst: Un puntero a la zona de memoria destino donde se     *
*	realizará la copia.										  *
*	src: Un puntero a la zona de memoria origen desde donde   *
*	se copiarán los datos.									  *
*	len: El número de bytes que se copiarán desde src a dst.  *
*															  *
\*************************************************************/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*srce;
	char	*dest;
	size_t	i;

	i = len;
	srce = (char *)src;
	dest = (char *)dst;
	if (srce == dest)
		return (dest);
	if (srce < dest)
	{
		while (i-- > 0)
			dest[i] = srce[i];
	}
	else
	{
		i = -1;
		while (++i < len)
			dest[i] = srce[i];
	}
	return (dest);
}
/*
int main(void)
{
    char str[] = "lamadredelbravo.";
    char dest[1];
    printf((ft_memmove(dest, str, 10)));
}*/
