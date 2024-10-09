/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:42:50 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 12:42:56 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*					FT_CALLOC:
    Asigna memoria para un número especificado de elementos
    de un tamaño dado, y la inicializa a cero.
    Es útil para asignar y preparar memoria para estructuras
    de datos, como arreglos.
*/
void	*ft_calloc(size_t num_elements, size_t size)
{
	void	*result;

	result = malloc(num_elements * size);
	if (!result)
		return (NULL);
	else
	{
		ft_bzero(result, num_elements * size);
		return (result);
	}
}
/*
int main(void)
{
    int *result = ft_calloc(5, 4);
    free(result);

    return (0);
}*/
