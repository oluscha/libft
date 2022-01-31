/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:56:42 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/10 13:56:44 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*buffer;
	size_t			i;

	i = 0;
	buffer = (unsigned char *)b;
	while (i < len)
	{
		buffer[i] = c;
		i++;
	}
	return (buffer);
}
