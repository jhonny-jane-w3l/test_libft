/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:19:06 by cbouhadr          #+#    #+#             */
/*   Updated: 2024/10/04 17:45:20 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		last;

	i = 0;
	last = -1;
	if (!s)
		return (NULL);
	if ((char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last = i;
		i++;
	}
	if (last >= 0)
		return ((char *)&s[last]);
	return (NULL);
}

// int main(void)
// {
// 	char txt[] = "voici le text";
// 	char b[]  = "bonjour";

// 	assert(strcmp(ft_strrchr(txt,'\0'),strrchr(txt,'\0')) == 0);
// 	TEST_OK;
// 	assert(strcmp(ft_strrchr(txt,'x'),strrchr(txt,'x')) == 0);
// 	TEST_OK;
// 	assert(ft_strrchr(txt,'z') == NULL);
// 	TEST_OK;
// 	assert(strcmp(ft_strrchr(b,'b'),strrchr(b,'b')) == 0);
// 	TEST_OK;
// 	assert(ft_strrchr(b,256) == &b[ft_strlen(b)]);
// 	TEST_OK;
// 	return (0);
// }