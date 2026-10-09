/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:18:42 by equinto           #+#    #+#             */
/*   Updated: 2026/10/07 12:25:19 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stddef.h>*/
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t	i;
	char	*ptr;
	i = 0;
	ptr = (char *)dest;
	while (i < count)
	{
		ptr[i] = c;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	str[40];
	char	str2[40];
	printf("str: %s\n", str);
	printf("memset: %s\n", str2);
	ft_memset(str, 'A', 4);
	memset(str2, 'A', 4);
	str[4] = '\0';
	printf("str: %s\n", str);
	printf("memset: %s\n", str2);
}*/

