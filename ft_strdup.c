/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:58:19 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/10 13:58:21 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*buffer;
	int		length;
	int		i;

	length = ft_strlen(s1);
	i = 0;
	buffer = (char *) malloc(sizeof(char) * (length + 1));
	if (!buffer)
		return (NULL);
	else if (s1[i] == '\0')
		buffer[i] = '\0';
	else
	{
		while (s1[i] != '\0')
		{
			buffer[i] = s1[i];
			i++;
		}
		buffer[i] = '\0';
	}
	return (buffer);
}
