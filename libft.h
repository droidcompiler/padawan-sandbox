/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:12:12 by equinto           #+#    #+#             */
/*   Updated: 2026/10/07 12:46:54 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>

typedef struct s_list
{
	void	*content;
	struct	s_list	*next;
}	t_list;

void	*ft_memset(void *dest, int c, size_t count);
void	ft_bzero(void *s, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);

#endif
