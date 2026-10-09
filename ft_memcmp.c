/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:40:52 by equinto           #+#    #+#             */
/*   Updated: 2026/10/09 17:35:54 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	size_t i;

if (n == 0)
	return (0);
str1 = (const char *)s1;
str2 = (const char *)s2;

i = 0;
while ((i < n - 1) && str1[i] == str2[i])
	i++;
return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
