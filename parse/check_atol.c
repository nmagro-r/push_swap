/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_atol.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:57:53 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/19 13:04:25 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
