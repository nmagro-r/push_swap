/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_smallest_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:27:44 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/21 18:31:27 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list  *get_smallest_node(t_list *stack)
{
    t_list *smallest = stack;

    while(stack)
    {
        if(stack->content < smallest->content)
            smallest = stack;
        stack = stack->next;
    }
    return(smallest);
}