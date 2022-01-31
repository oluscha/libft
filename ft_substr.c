/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:01:23 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/10 14:01:25 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - (size_t)start)
		len = ft_strlen(s) - start;
	if (((size_t)start > ft_strlen(s)) || (!s))
		return (ft_strdup(""));
	buffer = (char *) malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	while (i < len && s[i])
	{
		buffer[i] = s[start];
		i++;
		start++;
	}
	buffer[i] = '\0';
	return (buffer);
}
