/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 10:44:56 by equinto           #+#    #+#             */
/*   Updated: 2026/10/22 14:00:47 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int main (void)
{
	char test[] = {'F', 'f', '2', '@', ' '};

	for(int i = 0; i < 5; i++)
	{
		char c = test[i];
		printf("ft: %d - %d\n", ft_isprint(c), isprint(c));
	}
}*/
