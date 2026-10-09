/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 14:48:47 by equinto           #+#    #+#             */
/*   Updated: 2026/10/09 19:08:31 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = 'a';
	printf("Caracter: %c\n", c);
	printf("ft_toupper: %c\n", ft_toupper(c));
	printf("toupper:    %c\n\n", toupper(c));

	c = 'A';
	printf("Caracter: %c\n", c);
	printf("ft_toupper: %c\n", ft_toupper(c));
	printf("toupper:    %c\n\n", toupper(c));

	c = '5';
	printf("Caracter: %c\n", c);
	printf("ft_toupper: %c\n", ft_toupper(c));
	printf("toupper:    %c\n\n", toupper(c));

	c = '!';
	printf("Caracter: %c\n", c);
	printf("ft_toupper: %c\n", ft_toupper(c));
	printf("toupper:    %c\n", toupper(c));
}
