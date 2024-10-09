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

size_t	ft_rputaddress(unsigned long long int n, char *base_str)
{
	size_t	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_rputaddress(n / 16, base_str);
		count += ft_rputaddress(n % 16, base_str);
	}
	else
		count += ft_rputchar(base_str[n]);
	return (count);
}
