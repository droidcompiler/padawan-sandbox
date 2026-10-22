/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 14:03:52 by equinto           #+#    #+#             */
/*   Updated: 2026/10/22 15:07:09 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char *s;

	if (!dest && !src)
		return(NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
	{
		n--;
		d[n] = s[n];
	}
	else
	{
		size_t i;
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
int main(void)
{
	char str1[] = "12345";
	char str2[] = "12345";

	printf("prueba\n");
	ft_memmove(str1 + 2, str2, 5);
	printf("memmove %s\n", str2);

	char str3[] = "12345";
	char str4[] = "12345";

	printf("prueba\n");
	ft_memmove(str3, str3 + 2, 5);
	printf("memmove %s\n", str3);
}*/
