/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:45:00 by antvidal          #+#    #+#             */
/*   Updated: 2026/11/06 15:14:16 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t j;
	char *new_str;

	i = 0;
	j = 0;
	if(!s1 || !s2)
		return(NULL);
	new_str = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!new_str)
		return (NULL);
	while(s1[j])
		new_str[i++] = s1[j++];
	while(s2[j])
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	return (new_str);
}
// int	main(int argc, char **argv)
// {
// 	char	*res;

// 	if (argc != 3)
// 		return (1);
// 	res = ft_strjoin(argv[1], argv[2]);
// 	if (res)
// 		printf("mine: %s\n", res);
// 	free(res);
// 	return (0);
// }