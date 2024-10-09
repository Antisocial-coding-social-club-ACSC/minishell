/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:42:04 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 15:36:26 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *a, ...)
{
	size_t	i;
	size_t	len;
	va_list	args;

	if (!a)
		return (-1);
	i = 0;
	len = 0;
	va_start(args, a);
	while (a[i])
	{
		if (a[i] == '%')
		{
			if (i < ft_strlen(a) && a[i + 1] == '%')
				len += ft_rputchar('%');
			len += ft_print_case((char *)a, args, i++);
		}
		else
		{
			ft_putchar(a[i]);
			len++;
		}
		i++;
	}
	return (len);
}
