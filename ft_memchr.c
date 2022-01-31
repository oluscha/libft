/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:55:27 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/10 13:55:29 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buffer;

	buffer = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (n > 0)
	{
		if (*buffer == (unsigned char)c)
			return ((void *)buffer);
		buffer++;
		n--;
	}
	return (NULL);
}
