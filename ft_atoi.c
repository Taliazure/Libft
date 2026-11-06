/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 20:20:08 by antvidal          #+#    #+#             */
/*   Updated: 2026/11/06 00:21:11 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int atoi(const char *nptr)
{
    size_t i;
    size_t sign;
    size_t result;

    i = 0;
    sign = 1;
    result = 0;

    while(nptr[i])
    {
        if (nptr[i] == ' ' || (nptr[i] >= '9' && nptr[i] <= '13'))
            i++;
        if(nptr[i] == '-' || nptr[i] == '+')
        {
            if (nptr[i] == '-')
                sign = -1;
            i++;
        }
         while (nptr[i] >= '0' && nptr[i] <= '9')
        {
        result = result * 10 + (nptr[i] - '0');
        i++;
         }
        return (result * sign);
    }
}