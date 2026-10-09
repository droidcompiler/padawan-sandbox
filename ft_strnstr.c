/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 14:46:34 by equinto           #+#    #+#             */
/*   Updated: 2026/10/09 19:06:11 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	s2len;
	size_t	i;
	size_t	j;

	s2len = ft_strlen(s2);
	if (s2len == 0)
		return ((char *)s1);
	i = 0;
	while (i < len && s1[i] && i + s2len <= len)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j])
			j++;
		if (j == s2len)
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
