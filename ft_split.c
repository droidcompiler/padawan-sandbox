/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:46:52 by equinto           #+#    #+#             */
/*   Updated: 2026/10/27 16:52:16 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    **ft_split(char const *s, char c)
{
    static int count_words(char const *s, char c)
    {
        int     i;
        int count;

        count = 0;
        i =     0;
        while (s[i])
        {
            while (s[i] && s[i] == c)
                i++;
            if (s[i] && s[i] != c)
                count++;
            while (s[i] && s[i] != c)
                i++;
        }
        return (count);
    }
}