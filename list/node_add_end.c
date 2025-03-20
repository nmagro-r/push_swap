/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_add_end.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:12:35 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/20 15:14:18 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    node_add_end(t_list **stack, t_list *node)
{
    t_list  *end;
    
    if(node == NULL)
        return;
    if(*stack == NULL)
    {
        *stack = node;
    }
    node->next = NULL;
    else
    {
        end = *stack;
        while(end->next != NULL)
        {
            end = end->next;
        }
        end->next = node;   
    }
}