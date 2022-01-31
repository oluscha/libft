/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:56:00 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/10 13:56:12 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*buffer1;
	unsigned char	*buffer2;
	size_t			i;

	buffer1 = (unsigned char *)dst;
	buffer2 = (unsigned char *)src;
	i = 0;
	if (n && (buffer1 == buffer2))
		return (buffer1);
	while (i < n)
	{
		buffer1[i] = buffer2[i];
		i++;
	}
	return (buffer1);
}
