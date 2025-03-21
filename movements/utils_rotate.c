/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:07:27 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/21 15:08:42 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
void	ra(t_list **a, int flag)
{
	t_list	*temp;
	t_list	*move_node;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = NULL;
	move_node = *a;
	while (move_node->next != NULL)
		move_node = move_node->next;
	move_node->next = temp;
	if (flag == 1)
		ft_putstr_fd("ra\n", 1);
}
void	rb(t_list **b, int flag)
{
	t_list	*temp;
	t_list	*move_node;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = NULL;
	move_node = *b;
	while (move_node->next != NULL)
		move_node = move_node->next;
	move_node->next = temp;
	if (flag == 1)
		ft_putstr_fd("rb\n", 1);
}
void	rr(t_list **a, t_list **b)
{
	if (*b == NULL || (*b)->next == NULL)
		return ;
	if (*a == NULL || (*a)->next == NULL)
		return ;
	ra(a, 1);
	rb(b, 1);
}