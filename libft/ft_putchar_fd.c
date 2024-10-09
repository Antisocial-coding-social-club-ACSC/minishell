/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:33:00 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 15:33:02 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**************************************************************
*						FT_PUTCHAR_FD:						  *
*	La función ft_putchar_fd escribe un carácter (c) en el    *
*	descriptor de archivo especificado (fd).				  *
*															  *
*	Argumentos:												  *
*	c: El carácter que se escribirá en el descriptor de       *
*	archivo.												  *
*	fd: El descriptor de archivo donde se escribirá el        *
*	carácter.												  *
*															  *
\*************************************************************/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
    char caracter = 'A';
    int descriptor_de_archivo = 1;
// 1 corresponde a la salida estándar (stdout)

    ft_putchar_fd(caracter, descriptor_de_archivo);
    return (0);
}*/
