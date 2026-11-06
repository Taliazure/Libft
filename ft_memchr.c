/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:50:45 by antvidal          #+#    #+#             */
/*   Updated: 2026/11/03 17:58:54 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;
	const unsigned char	*s;

	s = (const unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
		{
			return ((void *)&s[i]);
		}
		i++;
	}
	return (NULL);
}