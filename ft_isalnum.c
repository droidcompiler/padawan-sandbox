/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 13:58:52 by equinto           #+#    #+#             */
/*   Updated: 2026/10/16 17:54:42 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int main(void)
{
char test[] = {'F', 'f', '2', '@', ' '};

for (int i = 0; i < 5; i++)
{
char c = test[i];
printf("ft: %d - std: %d\n", ft_isalnum(c), isalnum(c));
}
}