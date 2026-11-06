/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:10:19 by equinto           #+#    #+#             */
/*   Updated: 2026/10/24 16:11:39 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
  t_list  *temp;

  if (!lst || !del)
    return ;
  while (*lst)
  {
    temp = (*lst)->next;
    ft_lstdelone(*lst, del);
    *lst = temp;
  }
  *lst = NULL;
}
