/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_characters.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:41:38 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/19 12:58:57 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
