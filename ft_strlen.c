/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:03:30 by antvidal          #+#    #+#             */
/*   Updated: 2026/11/06 12:42:35 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *a)
{
	size_t	i;

	i = 0;
	while (a[i])
	{
		i++;
	}
	return (i);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 1)
// 		return (0);


// 	printf("My Funcion\n, %lu\n", ft_strlen(argv[1]));
// 	printf("original function,\n %lu\n", strlen(argv[1]));
// }
