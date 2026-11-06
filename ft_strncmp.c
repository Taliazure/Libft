/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:26:46 by antvidal          #+#    #+#             */
/*   Updated: 2026/11/03 15:49:27 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i != n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 1)
// 		return (0);
// 	printf("mine, %d\n", ft_strncmp(argv[1], argv[2], argv[3][0]));
// 	printf("original function, %d\n", strncmp(argv[1], argv[2], argv[3][0]));
// }
