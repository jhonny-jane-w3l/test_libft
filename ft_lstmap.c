/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouhadr <cbouhadr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:29:13 by cbouhadr          #+#    #+#             */
/*   Updated: 2024/10/02 14:42:13 by cbouhadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	if (lst && f && del)
	{
		while (lst->next)
		{
			ft_lstadd_back(new_list, ft_lstnew(f(lst->content)));
			lst = lst->next;
		}
	}
	return (*new_list);
}
