/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:09:38 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/21 15:10:09 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_list **a, int flag)
{
	t_list	*temp;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	temp = (*a)->next;
	(*a)->next = temp->next;
	temp->next = *a;
	*a = temp;
	if (flag == 1)
		ft_putstr_fd("sa\n", 1);
}
void	sb(t_list **b, int flag)
{
	t_list	*temp;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	temp = (*b)->next;
	(*b)->next = temp->next;
	temp->next = *b;
	*b = temp;
	if (flag == 1)
		ft_putstr_fd("sb\n", 1);
}
void	ss(t_list **a, t_list **b)
{
	if (*b == NULL || (*b)->next == NULL)
		return ;
	if (*a == NULL || (*a)->next == NULL)
		return ;
	sa(a, 1);
	sb(b, 1);
}