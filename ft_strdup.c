/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:58:18 by equinto           #+#    #+#             */
/*   Updated: 2026/10/17 14:32:40 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
    char	*copy;
    size_t	len;

    len = ft_strlen(s1);
    copy = (char *)malloc((len + 1) * sizeof(char));
    if (!copy)
        return (NULL);
    ft_memcpy(copy, s1, len + 1);
    return (copy);
}

int	main(void)
{
	char *original = "Hola";
	char *dup = ft_strdup(original);

	printf("Original:  \"%s\" (dir: %p)\n", original, (void *)original);
	printf("Duplicado: \"%s\" (dir: %p)\n", dup, (void *)dup);

	free(dup);
	return (0);
}
