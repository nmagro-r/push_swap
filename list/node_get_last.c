/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_get_last.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:24:05 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/20 15:32:34 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list  *node_get_last(t_list *first_node)
{
    t_list  *node;
    
    if(first_node == NULL)
        return NULL;

    node = first_node;

    while(node->next != NULL)
        node = node->next;
    return(node); 
}