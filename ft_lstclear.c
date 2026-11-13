/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:26:30 by antvidal          #+#    #+#             */
/*   Updated: 2026/11/12 16:48:05 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *ptr;
	t_list *curr;
	
	if (!lst || !del)
		return ;
	ptr = *lst;
	while(ptr != NULL)
	{
		curr = ptr;
		(del)(ptr->content);
		ptr = ptr->next;
		free(curr);
	}
	*lst = NULL;
}
