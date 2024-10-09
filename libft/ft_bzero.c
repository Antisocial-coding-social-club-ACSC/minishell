/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:42:31 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 12:42:36 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*						FT_BZERO:
 *	Establece todos los bytes de un bloque de memoria a cero.
 *	Es útil para inicializar o "borrar" la memoria de manera eficiente.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int main()
{
    int n = 4;
    char str[] = "Helloooooo";
    ft_bzero(str, n);

    return 0;
}*/
