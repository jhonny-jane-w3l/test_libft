/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:11:52 by cbouhadr          #+#    #+#             */
/*   Updated: 2024/10/04 05:55:03 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main()
// {
// 	t_list * lst;
// 	int i;

// 	i = 1;
// 	lst = ft_lstnew("txt1");
// 	lst->next = ft_lstnew("txt2");
// 	lst->next->next = ft_lstnew("txt3");
// 	assert(ft_lstlast(lst)->content == lst->next->next->content);
// 	printf("test %d reussie\n",i++);
// 	assert(ft_lstlast(NULL) == NULL);
// 	printf("test %d reussie\n",i++);
// 	return(0);
// }