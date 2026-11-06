/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:24:31 by antvidal          #+#    #+#             */
/*   Updated: 2026/11/06 19:49:26 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s2;
	size_t	s2len;

	s2len = ft_strlen(str);
	s2 = malloc(s2len + 1);
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, str, s2len + 1);
	return (s2);
}