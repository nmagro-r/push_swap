/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:49:00 by nmagro-r          #+#    #+#             */
/*   Updated: 2024/10/29 13:00:47 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
    t_list  *new_node;

	t_list *new_node = (t_list *)malloc(sizeof(t_list));

	if (new_node == NULL)
		return (NULL);

	new_node->content = content;
	new_node->next = NULL;

	return (new_node);
}