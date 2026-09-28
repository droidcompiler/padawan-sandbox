/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:35:59 by equinto           #+#    #+#             */
/*   Updated: 2026/09/28 19:04:01 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if (nb == 0)
    {
        return (1);
    }
    else if ((nb > 0) && (nb < 13))
    {
        return (nb = nb * ft_recursive_factorial(nb - 1));
    }
    else
    {
        return (0);
    }
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(13));
}*/