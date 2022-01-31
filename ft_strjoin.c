/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:58:50 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/10 13:58:52 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	size_t	i;

	i = 0;
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	buffer = (char *) malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!buffer)
		return (0);
	if (buffer)
	{
		while (*s1 != '\0')
			buffer[i++] = *(s1++);
		while (*s2 != '\0')
			buffer[i++] = *(s2++);
		buffer[i] = '\0';
		return (buffer);
	}
	return (NULL);
}
