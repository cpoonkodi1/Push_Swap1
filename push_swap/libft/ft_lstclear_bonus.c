/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:06:23 by pchennia          #+#    #+#             */
/*   Updated: 2023/11/08 11:06:39 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp_element;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp_element = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp_element;
	}
	*lst = NULL;
}
