/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:58:30 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/10 13:58:32 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	length;

	if (!s || !f)
		return ;
	i = 0;
	length = ft_strlen (s);
	if (s != NULL && f != NULL)
	{
		while (i < length)
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}
