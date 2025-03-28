/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:25:47 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 15:10:28 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*create_node(int num)
{
	t_list	*node;

	node = ft_calloc(1, sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = num;
	node->next = NULL;
	return (node);
}
