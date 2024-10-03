/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouhadr <cbouhadr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:54:18 by cbouhadr          #+#    #+#             */
/*   Updated: 2024/10/01 15:30:06 by cbouhadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	if (!haystack || len <= 0)
		return (NULL);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
			if (!ft_strncmp(&haystack[i], needle, ft_strlen(needle)))
				return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
