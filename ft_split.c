/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 16:45:33 by antvidal          #+#    #+#             */
/*   Updated: 2026/11/06 19:45:40 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t checkwords(char const *s, char c)
{
	size_t i;
	size_t str_n;

	i = 0;
	str_n = 0;
	while(s[i])
	{
		if((s[i] != c && (s[i + 1] == c) )|| (s[i] != c && s[i + 1] == '\0'))
			str_n++;
		i++;
		}
		return(str_n);
}
// Hello_world\0



static size_t wordlength(char const *s, char c, size_t *i)
{
	size_t letterwordcnt;

	letterwordcnt = 0;
	while(s[*i] && s[*i] != c)
	{
		*i = *i + 1;
		letterwordcnt++;
	}
	return (letterwordcnt);
}
static char	**failsafe(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}
char **ft_split(char const *s, char c)
{
	size_t i;
	size_t array;
	size_t len;
	char **str;

	if(!s)
		return(NULL);	
	str = ft_calloc(checkwords(s, c) + 1, sizeof(char *));
	if(!str)
		return(NULL);
	i = 0;
	array = 0;
	while(s[i])
	{
		while(s[i] == c)
			i++;
		if(!s[i])
			break ;
		len = wordlength(s, c, &i);
		str[array] = ft_substr(s, i - len, len);
		if(!str[array])
			return (failsafe(str));
		array++;
	}
	return(str);
}

int main(void)
{
	int i = 0;
	char **final;

	final = ft_split("__Hello__world_mibombo", '_');
	while(final && final[i])
	{
		printf("final[%d] = %s\n", i, final[i]);
		free(final[i]);
		i++;
	}
	free(final);
	return(0);
}