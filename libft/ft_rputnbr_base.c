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

size_t	ft_rputnbr_base(long long int n, int base, char *base_str)
{
	size_t	count;

	count = 0;
	if (n >= base)
	{
		count += ft_rputnbr_base(n / base, base, base_str);
		count += ft_rputnbr_base(n % base, base, base_str);
	}
	else
		count += ft_rputchar(base_str[n]);
	return (count);
}
