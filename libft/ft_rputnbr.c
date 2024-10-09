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

#include "libft.h"

size_t	ft_rputnbr(long long int n)
{
	size_t			count;
	long long int	tmp;

	count = 1;
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
		count++;
	}
	tmp = n;
	while (tmp >= 10)
	{
		tmp = tmp / 10;
		count++;
	}
	if (n < 10 && n >= 0)
		ft_putchar(n + '0');
	if (n >= 10)
	{
		ft_putnbr_fd((n / 10), 1);
		ft_putchar((n % 10) + '0');
	}
	return (count);
}
