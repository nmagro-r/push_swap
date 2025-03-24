/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:15:49 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/21 19:05:32 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    test_populate(int argc, char **argv, t_list **stack)
{
    while (argc > 1)
    {
        argc--;
        node_add_front(stack, create_node(ft_atoi(argv[argc])));
    }
}//esta función es de pega!!!

int main(int argc, char **argv)
{
    t_list  *stack_a;
    t_list  *stack_b;
    int     i;
    char    **nums;

    nums = NULL;
    stack_a = NULL;
    stack_b = NULL;
    i = 1;

    if(argc < 2)
        return(0);//tiene que devolver un saalto de linea
    test_populate(argc, argv, &stack_a);
    pb(&stack_a, &stack_b, 1);
    pb(&stack_a, &stack_b, 1);
    pb(&stack_a, &stack_b, 1);
    ra(&stack_a, 1);
    rb(&stack_b, 1);
    rr(&stack_a, &stack_b);
    rra(&stack_a, 1);
    rrb(&stack_b, 1);
    rrr(&stack_a, &stack_b);
    sa(&stack_a, 1);
    sb(&stack_b, 1);
    ss(&stack_a, &stack_b);
    return(0);
}