/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antvidal <antvidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 16:49:36 by antvidal          #+#    #+#             */
/*   Updated: 2026/11/12 17:58:44 by antvidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nwr;
	t_list	*bnr;
	void 	*ptr;
	
	if(!lst || !f || !del)
		return (NULL);
	nwr = NULL;
	while (lst)
	{
		ptr = (*f)(lst->content);
		bnr = ft_lstnew(ptr);
		if(!bnr)
		{
			del(ptr);
			ft_lstclear(&nwr, del);
			return (NULL);
		}
		ft_lstadd_back(&nwr, bnr);
		lst = lst->next;
	}
	return (nwr);
}
