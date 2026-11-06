/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equinto <equinto@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:00:55 by equinto           #+#    #+#             */
/*   Updated: 2026/10/24 16:01:20 by equinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
  t_list  *new_node;

  new_node = (t_list *)malloc(sizeof(t_list));
  if (!new_node)
    return (NULL);
  new_node->content = content;
  new_node->next = NULL;
  return (new_node);
}
