/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:30:04 by equinto           #+#    #+#             */
/*   Updated: 2026/10/17 14:30:48 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len;
	int		i;

	len = ft_strlen(s1) + ft_strlen(s2);
	s = ft_calloc(len + 1, sizeof(char));
	if (!s)
		return (NULL);
	len = 0;
	while (s1[len])
	{
		s[len] = s1[len];
		len++;
	}
	i = 0;
	while (s2[i])
	{
		s[len + i] = s2[i];
		i++;
	}
	return (s);
}

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
}