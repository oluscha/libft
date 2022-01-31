/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:56:22 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/10 13:56:24 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t length)
{
	size_t			help;
	unsigned char	*buffer1;
	unsigned char	*buffer2;

	buffer1 = (unsigned char *)destination;
	buffer2 = (unsigned char *)source;
	help = 0;
	if (length && (buffer1 == buffer2))
		return (buffer1);
	while (help < length)
	{
		if (destination > source)
			buffer1[length - 1 - help] = buffer2[length - 1 - help];
		else
			buffer1[help] = buffer2[help];
		help++;
	}
	return (destination);
}
