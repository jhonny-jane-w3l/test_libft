/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:02:14 by cbouhadr          #+#    #+#             */
/*   Updated: 2024/10/04 06:28:23 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		if (!*lst)
			*lst = new;
		else
			ft_lstlast(*lst)->next = new;
	}
}

// int	main()
// {
// 	t_list **lst;
// 	int i;
// 	int t;
// 	char txt[] = "new_txt";

// 	i = 1;
// 	t = 10;
// 	lst = malloc(sizeof(t_list));
// 	if (!lst)
// 		return (1);

// 	*lst = ft_lstnew("txt1");
// 	(*lst)->next = ft_lstnew("txt2");
// 	(*lst)->next->next = ft_lstnew("txt3");

// 	ft_lstadd_back(lst,ft_lstnew("new_txt"));
// 	assert(strcmp((char *)(ft_lstlast(*lst))->content,txt) == 0);
// 	printf("test %d reussie\n",i++);

// 	ft_lstadd_back(lst, ft_lstnew(&t));
// 	int value = *(int *)(ft_lstlast(*lst)->content); 
// 	assert(value == 10);
// 	printf("test %d reussie\n",i++);

// 	ft_lstadd_back(NULL, ft_lstnew(NULL));
// 	assert(value == 10);
// 	printf("test %d reussie\n",i++);
// 	return(0);
// }