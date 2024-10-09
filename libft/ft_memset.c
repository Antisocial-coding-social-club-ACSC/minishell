/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:31:33 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 15:31:37 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**************************************************************
*						FT_MEMSET:							  *
*	La función ft_memset establece los primeros len bytes     *
*	de una zona de memoria (b) con un valor específico (c).   *
*	Devuelve un puntero a la zona de memoria modificada.      *
*															  *
*	Argumentos:												  *
*	b: Un puntero a la zona de memoria donde se realizará     *
*	la operación de establecimiento de valores.               *
*	c: El valor que se establecerá en los bytes de memoria.   *
*	len: El número de bytes que se establecerán con el valor  *
*	específico.												  *
*															  *
\*************************************************************/
void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dest;
	while (len > 0)
	{
		ptr [len - 1] = c;
		len--;
	}
	return (dest);
}
/*
int main(void)
{
    char str[20];

    ft_memset(str, '6', 12);
    printf("%s", str);

    return (0);
}*/
