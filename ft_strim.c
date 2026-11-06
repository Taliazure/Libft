/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:14:23 by antvidal          #+#    #+#             */
/*   Updated: 2026/11/06 16:45:01 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int checkset(char c, char const *set)
{
		while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	size_t i;
	char *s1_trim;
	
	end = strlen(s1);
	i = 0;
	if(!s1 || !set)
		return(NULL);
	start = 0;
	while(s1[start] && checkset(s1[start], set))
		start++;
	while(end != start && checkset(s1[end - 1], set))
		end--;
	s1_trim = malloc(end - start + 1);
	if (!s1_trim)
		return (NULL);
	while(start < end)
		s1_trim[i++] = s1[start++];
	s1_trim[i] = '\0';
	return (s1_trim);
}
