/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 15:04:10 by equinto           #+#    #+#             */
/*   Updated: 2026/10/22 14:00:37 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
int main(void)
{
char test[] = {'F', 'f', '2', '@', ' '};

for (int i = 0; i < 5; i++)
{
char c = test[i];
printf("ft: %d - std: %d\n", ft_isdigit(c), isdigit(c));
}
}*/
