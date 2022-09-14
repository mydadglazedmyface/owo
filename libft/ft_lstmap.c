/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 21:21:28 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/14 17:23:03 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newls;
	t_list	*newnd;

	newls = 0;
	while (lst)
	{
		newnd = ft_lstnew(f(lst->content));
		if (!newnd)
		{
			ft_lstclear(&newls, del);
			break ;
		}
		ft_lstadd_back(&newls, newnd);
		lst = lst->next;
	}
	return (newls);
}
