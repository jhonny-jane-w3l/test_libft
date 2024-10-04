/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:45:51 by cbouhadr          #+#    #+#             */
/*   Updated: 2024/10/03 18:25:52 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	if (!dst || dstsize <= 0)
		return (0);
	while (i < dstsize - 1)
		dst[len++] = src[i++];
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
