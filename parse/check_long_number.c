/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_long_number.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:42:38 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/18 16:02:16 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
