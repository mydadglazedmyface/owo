/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:52:34 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/13 21:16:23 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (!lst)
		return ;
	while (*lst)
	{
		p = *lst;
		ft_lstdelone(*lst, del);
		*lst = p->next;
	}
	*lst = 0;
}
