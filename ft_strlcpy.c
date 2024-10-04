/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:58:11 by cbouhadr          #+#    #+#             */
/*   Updated: 2024/10/04 18:58:00 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dst || !src )
		return (0);
	if(dstsize <=0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

// int main()
// {
// 	char txt[10];
// 	char txt2[100];
// 	assert(ft_strlcpy(txt,"voici la chaine de caractère a copier",10) == strlcpy(txt,"voici la chaine de caractère a copier",10));
// 	TEST_OK;
// 	assert(ft_strlcpy(txt,"voici la chaine de caractère a copier",0) == strlcpy(txt,"voici la chaine de caractère a copier",0));
// 	TEST_OK;
// 	assert(ft_strlcpy(txt2,"",10) == strlcpy(txt2,"",10));
// 	TEST_OK;
	
// 	return (0);
// }