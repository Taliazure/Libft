/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:46:16 by antvidal          #+#    #+#             */
/*   Updated: 2026/11/12 16:23:10 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while(lst->next)
	{
		lst = lst->next;
	}
	return(lst);
}

// int main(void)
// {
// 	t_list *node = ft_lstnew("Hello, world!");
// 	t_list *node2 = ft_lstnew("Hello, world!2");
// 	t_list *node3 = ft_lstnew("Hello, world!3");
// 	t_list *last_node;
// 	ft_lstadd_front(&node, node2);
// 	ft_lstadd_front(&node, node3);
// 	last_node = ft_lstlast(node);
// 	printf("Content of the last node: %s\n", (char *)last_node->content);
// 	return (0);
// }
