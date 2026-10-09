/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:00:56 by equinto           #+#    #+#             */
/*   Updated: 2026/10/09 09:06:49 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;
	i = 0;
	while (s[i] !='\0')
	{
	i++;
	}
	return (i);
}

int	main(void)
{
	printf("%ld", ft_strlen("12345"));
}
