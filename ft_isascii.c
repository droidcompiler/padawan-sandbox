/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 17:36:16 by equinto           #+#    #+#             */
/*   Updated: 2026/10/22 14:00:27 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}
/*
int main(void)
{
int test[] = {65, 'a', 128, 200, -5};

for (int i = 0; i < 5; i++)
{
char c = test[i];
printf("ft: %d - std: %d\n", ft_isascii(c), isascii(c));
}
}*/
