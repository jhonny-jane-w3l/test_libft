/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouhadr <cbouhadr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:58:24 by cbouhadr          #+#    #+#             */
/*   Updated: 2024/10/02 11:42:52 by cbouhadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (ft_isset(s1[i], set))
		i++;
	while (ft_isset(s1[j], set))
		j--;
	if (j == 0 && i == 0)
		return (ft_strdup(s1));
	len = (ft_strlen(s1) - ((ft_strlen(s1) - j) + i) + 2);
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], ft_strlen(s1) - ((ft_strlen(s1) - j) + i - 2));
	return (str);
}
