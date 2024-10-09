/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:32:48 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 15:32:49 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**************************************************************
*						FT_MEMCPY:							  *
*	La función ft_memcpy copia n bytes de una zona de memoria *
*	origen (src) a una zona de memoria destino (dest).        *
*	Devuelve un puntero a la zona de memoria destino.         *
*															  *
*	Argumentos:												  *
*	dest: Un puntero a la zona de memoria destino donde se    *
*	realizará la copia.										  *
*	src: Un puntero a la zona de memoria origen desde donde   *
*	se copiarán los datos.									  *
*	n: El número de bytes que se copiarán desde src a dest.   *
*															  *
\*************************************************************/
#include "libft.h"
/*#include <stddef.h>*/

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < len)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*memcpy is used to copy a block of memory from a location to another.
int main(void)
{
    char dest[] = "ooooooo";
    char src[] = "aaaaaaa";

    printf("elmio----> %s", ft_memcpy(dest, src, 5));

    return (0);
}*/
