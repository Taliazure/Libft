/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:51:49 by antvidal          #+#    #+#             */
/*   Updated: 2026/11/10 15:15:46 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t digit_count(long n)
{
	size_t size;
	
	size = 1;
	if(n < 0)
	{
		n = -n;
		size++;
	}
	while(n >= 10)
	{
		n = n / 10;
		size++;
	}
	return(size);
}
static void fill_str(char *string, unsigned int i, long n)
{
	
	if(n < 0)
	{
		string[0] = '-';
		n = n * -1;
	}
	string[i] = '\0';
	if(n == 0)
		string[0] = '0';
	while(n > 0)
	{
		i--;
		string[i] = n % 10 + '0'; 
		n = (n / 10);
	}
}

char	*ft_itoa(int n)
{
	char *string;
	int i;
	long nb;
	size_t size;

	nb = n;
	size = digit_count(nb);
	i = size;
	string = malloc(size + 1);
	if (!string)
		return (NULL);
	fill_str(string, i, nb);
	return(string);
}

// int main(int argc, char **argv)
// {

// 	printf()
// 	return(0);
// }