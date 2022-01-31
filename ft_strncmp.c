/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:59:56 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/10 14:00:15 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*buffer1;
	unsigned char	*buffer2;
	int				i;

	buffer1 = (unsigned char *)s1;
	buffer2 = (unsigned char *)s2;
	i = 0;
	while (n > 0)
	{
		if (buffer2[i] != buffer1[i])
			return ((int)(buffer1[i] - buffer2[i]));
		if ((buffer2[i] == '\0') || (buffer1[i] == '\0'))
			return ((int)(buffer1[i] - buffer2[i]));
		i++;
		n--;
	}
	return (0);
}
