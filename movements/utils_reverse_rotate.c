/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:08:57 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 15:06:37 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a, int flag)
{
	t_list	*move_node;
	t_list	*temp;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	move_node = *a;
	while (move_node->next->next != NULL)
		move_node = move_node->next;
	temp = move_node->next;
	move_node->next = NULL;
	temp->next = *a;
	*a = temp;
	if (flag == 1)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_list **b, int flag)
{
	t_list	*move_node;
	t_list	*temp;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	move_node = *b;
	while (move_node->next->next != NULL)
		move_node = move_node->next;
	temp = move_node->next;
	move_node->next = NULL;
	temp->next = *b;
	*b = temp;
	if (flag == 1)
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_list **a, t_list **b)
{
	if (*b == NULL || (*b)->next == NULL)
		return ;
	if (*a == NULL || (*a)->next == NULL)
		return ;
	rra(a, 1);
	rrb(b, 1);
}
