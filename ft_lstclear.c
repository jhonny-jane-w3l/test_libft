/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:16:20 by cbouhadr          #+#    #+#             */
/*   Updated: 2024/10/04 16:01:04 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	START_DEBUGG;
	t_list	*tmp;
	t_list	*liste;

	liste = *lst;
	if (lst && del)
	{
		while (liste->next)
		{
			tmp = *lst;
			del(*lst);
			*lst = tmp;
		}
		del(*lst);
		lst = NULL;
		free (lst);
	}
}

// void	ft_del(void *ptr)
// {
// 	ptr = NULL;
	
// }

// int main(void)
// {
// 	t_list **lst;
	
// 	lst = malloc(sizeof(t_list));
// 	if (!lst)
// 		return (1);
// 	*lst = ft_lstnew("txt1");
// 	ft_lstadd_back(lst,ft_lstnew("txt2"));
// 	ft_lstadd_back(lst,ft_lstnew("txt3"));
// 	assert(ft_lstlast(*lst) != NULL);

// 	ft_lstclear(lst,ft_del);

// 	assert(*lst == NULL);
// 	return (0);
// }