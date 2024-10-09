/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:32:38 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 15:32:39 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*it converts the int to a str (char *). Negative numbers must be handled
static int is a variable that exist till the end of the program
once initialized. int will be destroyed when the function ends.
long is a data type that can store a single 64-bit signed int.
from -2.147.483.648 to 2.147.483.648
len is +1 because there is null at the end of the string.
is division and % module. The problem of --len is caused by
the differences from position and lenght
*/
static int	largo_num(int n, int contador)
{
	if (n < 0)
		return (largo_num(-n, contador + 1));
	if (n > 0)
		return (largo_num(n / 10, contador + 1));
	return (contador);
}

static char	*alstring(int n, int largo)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(largo * sizeof(char) + 1);
	if (!str)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		n = -n;
		str[i] = '-';
		i++;
	}
	while (n > 0)
	{
		str[--largo] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int	largo;

	if (n == 0)
		return (ft_strdup("0"));
	else if (n < -2147483647)
		return (ft_strdup("-2147483648"));
	else if (n > 2147483647)
		return (ft_strdup("2147483647"));
	largo = largo_num(n, 0);
	return (alstring(n, largo));
}
/*
int    main(void)
{
    char *result_ft_itoa1 = ft_itoa(-1500);
    char *result_ft_itoa2 = ft_itoa(556566);
    char *result_ft_itoa3 = ft_itoa(0);
    char *result_ft_itoa4 = ft_itoa(-45454);
    char *result_ft_itoa5 = ft_itoa(17);


    printf("result itoa1: %s\n", result_ft_itoa1);
    printf("result itoa2: %s\n", result_ft_itoa2);
    printf("result itoa3: %s\n", result_ft_itoa3);
    printf("result itoa4: %s\n", result_ft_itoa4);
    printf("result itoa5: %s\n", result_ft_itoa5);


    free (result_ft_itoa1);
    free (result_ft_itoa2);
    free (result_ft_itoa3);
    free (result_ft_itoa4);
    free (result_ft_itoa5);


    return (0);
}*/
