/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 14:42:46 by equinto           #+#    #+#             */
/*   Updated: 2026/10/09 11:32:22 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	strlcat(char *dest, const char *src, size_t size)
{
size_t	dest_size;
size_t	src_size;
size_t	i;
size_t	j;

dest_size = ft_strlen(dest);
src_size = ft_strlen(src);
j = dest_size;
i = 0;

if (dest_size >= size)
	return (dest_size + src_size);
while (src[i] && j < size - 1)
{
	dest[j] = src[i];
	j++;
	i++;
}
dest[j] = '\0';
return (dest_size + src_size);
}
