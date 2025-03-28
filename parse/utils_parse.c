/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:18:03 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 15:08:24 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	validate_characters(char *num)
{
	int	i;

	i = 0;
	if (ft_is_sing(num[0]) || ft_isdigit(num[0]))
	{
		if (ft_is_sing(num[0]) && num[1] == '\0')
			return (0);
		if (ft_is_sing(num[0]))
			i++;
		while (ft_isdigit(num[i]))
		{
			if (num[i + 1] == '\0')
				return (1);
			i++;
		}
	}
	return (0);
}

int	check_long_number(char *numbers)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (numbers[i] == '+' || numbers[i] == '-')
		i++;
	while (numbers[i] && count <= 11)
	{
		i++;
		count++;
	}
	if (count >= 11)
		return (0);
	return (1);
}

int	check_atol(char *numbers)
{
	long	num;

	if (check_long_number(numbers) == 0)
		return (0);
	num = ft_atol(numbers);
	if (num > 2147483647 || num < -2147483648)
		return (0);
	return (1);
}

void	check_parse(char *arg, t_list **stack_a)
{
	if (!check_atol(arg))
		fun_error(stack_a);
	if (!check_long_number(arg))
		fun_error(stack_a);
	if (!validate_characters(arg))
		fun_error(stack_a);
}

void	check_dup(t_list **stack_a)
{
	t_list	*current;
	t_list	*temp;

	current = *stack_a;
	while (current != NULL)
	{
		temp = current->next;
		while (temp != NULL)
		{
			if (current->content == temp->content)
				fun_error(stack_a);
			temp = temp->next;
		}
		current = current->next;
	}
}
