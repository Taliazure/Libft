/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:51:45 by antvidal          #+#    #+#             */
/*   Updated: 2026/11/03 14:01:02 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		if ((unsigned char)c == '\0' && s[i] == '\0')
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(int argc, char **argv)
// {
// 	if (argc < 2)
// 		return (0);

// 	printf("mine %s\n", ft_strchr(argv[1], argv[2][0]));
// 	printf("Original function %s", strchr(argv[1], argv[2][0]));
// }
