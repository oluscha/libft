/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:00:47 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/10 14:00:48 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	length;

	length = ft_strlen(s);
	while (length > 0)
	{
		if (s[length] == (char)c)
			return ((char *)(s + length));
		else
			length--;
	}
	if (s[length] == (char)c)
		return ((char *)(s + length));
	return (0);
}
