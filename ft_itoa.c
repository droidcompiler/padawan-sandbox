/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 13:42:40 by equinto           #+#    #+#             */
/*   Updated: 2026/10/31 00:28:54 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_count_digit(long num)
{
    int len;

    len = 0;
    if (num <= 0)
    {
        len = 1;
        num = -num;
    }
    while (num > 0)
    {
        num /= 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    char	*str;
    int		len;
    long	num;

    num = n;
    len = ft_count_digit(num);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    str[len] = '\0';
    num = n;
    if (num == 0)
        str[0] = '0';
    if (num < 0)
    {
        str[0] = '-';
        num = -num;
    }
    while (num > 0)
    {
        len--;
        str[len] = (num % 10) + '0';
        num /= 10;
    }
    return (str);
}

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);

int	main(void)
{
	char	*res_pos;
	char	*res_neg;
	char	*res_min;

	res_pos = ft_itoa(0);
	res_neg = ft_itoa(00);
	res_min = ft_itoa(-2147483648);
	printf("Positivo : %s\n", res_pos);
	printf("Negativo : %s\n", res_neg);
	printf("Int Min  : %s\n", res_min);
	free(res_pos);
	free(res_neg);
	free(res_min);
	return (0);
}