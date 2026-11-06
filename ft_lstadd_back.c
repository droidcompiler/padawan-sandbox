/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:06:31 by equinto           #+#    #+#             */
/*   Updated: 2026/10/24 16:07:52 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
  t_list  *last;

  if (!lst || !new)
    return ;
  if (!*lst)
  {
    *lst = new;
    return ;
  }
  last = ft_lstlast(*lst);
  last->next = new;
}
