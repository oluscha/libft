/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:39:20 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/15 19:39:22 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*buffer;

	if (*lst != NULL && del != NULL && lst != NULL)
	{
		while (*lst)
		{
			buffer = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = buffer;
		}
		free (buffer);
	}
}
