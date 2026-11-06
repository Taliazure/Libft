/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:57:59 by antvidal          #+#    #+#             */
/*   Updated: 2026/10/28 14:37:39 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	unsigned char *p;

	p = (unsigned char *)str;
	i = 0;
	while(i < n)
	{
		p[i] = (unsigned char)c;
		i++; 
	}
	return(str);
}
