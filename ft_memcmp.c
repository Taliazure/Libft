/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 18:00:14 by antvidal          #+#    #+#             */
/*   Updated: 2026/11/03 18:17:58 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	const unsigned char *s2;
	const unsigned char *s1;

	i = 0;
	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 1)
// 		return (0);
// 	printf("mine, %d\n", ft_memcmp(argv[1], argv[2], argv[3][0]));
// 	printf("original function, %d\n", memcmp(argv[1], argv[2], argv[3][0]));
// }