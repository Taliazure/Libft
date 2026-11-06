/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 04:32:49 by antvidal          #+#    #+#             */
/*   Updated: 2026/11/06 19:17:17 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;


    i = 0;
    if(size == 0)
        return(strlen(src));
        
    while(i != (size - 1) && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(strlen(src));
}
