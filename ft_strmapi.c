/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:17:21 by antvidal          #+#    #+#             */
/*   Updated: 2026/11/10 19:28:46 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *result;

	if (!s)
		return(NULL);
	i = 0;
	result = malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!result)
		return(NULL);
	while(s[i])
	{
		result[i] = f(i ,s[i]);
		i++;
	}
	result[i] = '\0';
	return(result);
}
