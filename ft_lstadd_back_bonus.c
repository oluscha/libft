/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:38:45 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/15 19:38:52 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*buffer;

	if (new)
	{
		buffer = *lst;
		if (buffer == NULL)
			*lst = new;
		else if (buffer)
		{
			while (buffer->next != NULL)
				buffer = buffer->next;
			buffer->next = new;
		}
	}
}
