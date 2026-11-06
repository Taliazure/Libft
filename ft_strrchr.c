/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:02:40 by antvidal          #+#    #+#             */
/*   Updated: 2026/11/03 14:26:15 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*d;
	int			i;

	d = s;
	i = ft_strlen(d);
	while (i > 0)
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// int	main(int argc, char **argv)
// {
// 	if (argc < 2)
// 		return (0);

// 	printf("mine %s\n", ft_strrchr(argv[1], argv[2][0]));
// 	printf("Original function %s", strrchr(argv[1], argv[2][0]));
// }
