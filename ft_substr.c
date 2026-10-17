/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:26:29 by equinto           #+#    #+#             */
/*   Updated: 2026/10/17 14:26:31 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}

int	main(void)
{
	char *s = ft_calloc(5, sizeof(char));

	printf("Puntero: %p\n", (void *)s);
	printf("Primer byte (debe ser 0): %d\n", s ? s[0] : -1);
	free(s);
	return (0);
}