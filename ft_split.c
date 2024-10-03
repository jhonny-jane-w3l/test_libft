/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouhadr <cbouhadr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:53:35 by cbouhadr          #+#    #+#             */
/*   Updated: 2024/10/02 16:43:33 by cbouhadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *str, char c)
{
	size_t	i;
	size_t	word_count;
	size_t	is_word;

	i = 0;
	word_count = 0;
	is_word = 0;
	while (i < ft_strlen(str) - 1)
	{
		if (str[i] == c)
		{
			is_word = 0;
			i++;
		}
		if (str[i] != c)
		{
			if (is_word == 0)
				word_count++;
			is_word = 1;
			i++;
		}
	}
	return (word_count);
}

char	*ft_safe_alloc(char **ptr, int size)
{
	char	*p;
	size_t	i;

	i = 0;
	p = malloc((sizeof(char) * size) + 1);
	if (!p)
	{
		while (ptr[i])
		{
			ptr[i] = NULL;
			free(ptr[i]);
			i++;
		}
		return (NULL);
	}
	return (p);
}

void	process_data(char **ptr, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*str;

	j = 0;
	i = 0;
	while (i < ft_strlen(s) - 1)
	{
		size = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c)
		{
			size++;
			i++;
		}
		if (size)
		{
			str = ft_safe_alloc(ptr, size);
			if (str)
				ptr[j++] = str;
		}
	}
	ptr[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	word;
	char	**ptr;

	word = 0;
	if (!s)
		return (NULL);
	word = count_word(s, c);
	ptr = malloc((sizeof(char *) * word) + 1);
	if (!ptr)
		return (NULL);
	process_data(ptr, s, c);
	return (ptr);
}
