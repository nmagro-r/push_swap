/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:32:00 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/13 15:32:06 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

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