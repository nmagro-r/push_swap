
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:12:14 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/13 13:12:15 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*first;
	void	*temp;

	first = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		temp = f(lst->content);
		newlst = ft_lstnew(temp);
		if (newlst == NULL)
		{
			del(temp);
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, newlst);
		lst = lst->next;
	}
	return (first);
}