/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 13:58:01 by equinto           #+#    #+#             */
/*   Updated: 2026/10/22 14:01:22 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
/*
int	ft_atoi(const char *str);

int	main(void)
{
	printf("ft: %d | real: %d\n", ft_atoi("   -42"), atoi("   -42"));
	printf("ft: %d | real: %d\n", ft_atoi("  +1234abc"), atoi("  +1234abc"));
	printf("ft: %d | real: %d\n", ft_atoi("--42"), atoi("--42"));
	printf("ft: %d | real: %d\n", ft_atoi("0"), atoi("0"));
	return (0);
}*/
