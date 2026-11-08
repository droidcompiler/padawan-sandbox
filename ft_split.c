/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:46:52 by equinto           #+#    #+#             */
/*   Updated: 2026/11/08 21:07:10 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_tab(char **tab, int i)
{
	while (i > 0)
	{
		i--;
		free(tab[i]);
	}
	free(tab);
}

static char	*dup_word(char const *s, int start, int end)
{
	char		*word;
	int			i;

	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static int	count_words(char const *s, char c)
{
	int		in_word;
	int		count;

	in_word = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static int	fill_tab(char **tab, char const *s, char c)
{
	int		i;
	int		start;
	int		row;

	i = 0;
	row = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		tab[row] = dup_word(s, start, i);
		if (!tab[row])
		{
			free_tab(tab, row);
			return (-1);
		}
		row++;
	}
	return (row);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		rows;

	if (!s)
		return (NULL);
	tab = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	rows = fill_tab(tab, s, c);
	if (rows < 0)
		return (NULL);
	tab[rows] = NULL;
	return (tab);
}
