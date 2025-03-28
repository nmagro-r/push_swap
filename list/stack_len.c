/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:20:55 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 15:16:37 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_len(t_list *stack)
{
	int	lenght;

	lenght = 0;
	while (stack != NULL)
	{
		lenght ++;
		stack = stack->next;
	}
	return (lenght);
}
