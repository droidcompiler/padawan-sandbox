/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:30:04 by equinto           #+#    #+#             */
/*   Updated: 2026/10/22 15:09:25 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t i;
	size_t j;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ()ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i+j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
/*
int	main(void)
{
	char *res1 = ft_strjoin("Hola ", "Mundo");
	char *res2 = ft_strjoin("", "42");
	char *res3 = ft_strjoin("Libft", "");

	printf("Test 1: \"%s\"\n", res1);
	printf("Test 2: \"%s\"\n", res2);
	printf("Test 3: \"%s\"\n", res3);

	free(res1);
	free(res2);
	free(res3);
	return (0);
}*/
