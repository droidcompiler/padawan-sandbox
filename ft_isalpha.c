/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 12:53:50 by equinto           #+#    #+#             */
/*   Updated: 2026/10/16 17:43:39 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
 
int	main(void)
{
	char	test[] = {'F', 'f', '2', '@', ' '};

	for (int i = 0; i < 5; i++)
	{
		char	c = test[i];
		printf("ft: %d - std: %d\n", ft_isalpha(c), isalpha(c));
	}
}
