/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 12:26:51 by equinto           #+#    #+#             */
/*   Updated: 2026/10/22 15:06:29 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destf;
	const char	*srcf;

	destf = (char *)dest;
	srcf = (const char *)src;

	if (dest == src)
		return(dest);
	while (n--)
	{
		*destf++ = *srcf++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char	src[] = "-12345";
	char	str1[10];
	char	str2[10];
	ft_memcpy(str1, src, 8);
	memcpy(str2, src, 8);
	printf("ft_memcpy: ");
	for (int i = 0; i < 8; i++)
		printf("%c", str1[i]);

	printf("\nmemcpy:    ");
	for (int i = 0; i < 8; i++)
		printf("%c", str2[i]);

	printf("\n");
}*/

