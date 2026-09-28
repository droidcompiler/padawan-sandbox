/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 21:00:50 by equinto           #+#    #+#             */
/*   Updated: 2026/09/28 16:28:38 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)

{
    int i;
    
    if (nb == 0)
    {
        return (1);
    }
    else if ((nb > 0) && (nb < 13))
    {
        i = nb - 1;
        while (i > 0)
        {
            nb = nb * i;
            i--;
        }
        return (nb);
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
	printf("%d\n", ft_iterative_factorial(-4));
}
*/