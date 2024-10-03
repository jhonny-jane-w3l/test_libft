/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouhadr <cbouhadr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:43:19 by cbouhadr          #+#    #+#             */
/*   Updated: 2024/10/03 11:38:31 by cbouhadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[i])
			ft_putchar_fd(s[i++], fd);
	}
}

/* int main(void)
{
	char txt[] = "voicpi le texte";
	char txt2[] = "text2";
	char txt3[] = "";
	
	ft_putstr_fd(txt,1);
	ft_putchar_fd(10,1);
	ft_putstr_fd(txt2,1);
	ft_putchar_fd(10,1);
	ft_putstr_fd(NULL,1);
	return(0);
} */