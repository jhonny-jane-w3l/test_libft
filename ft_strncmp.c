/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:03:24 by cbouhadr          #+#    #+#             */
/*   Updated: 2024/10/04 18:44:45 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2 || n <= 0)
		return (0);
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
	
// 	assert(ft_strncmp("texte 1 ","texte 1 ", ft_strlen("texte 1 ")) == 0);
// 	// TEST_OK;
	
// 	PRINT_INT(ft_strncmp("test\200", "test\0", 6));
// 	PRINT_INT(strncmp("test\200","test\0", 6));
	
// 	return (0);
// }