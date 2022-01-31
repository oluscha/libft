/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:01:00 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/10 14:01:05 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buffer;
	int		length;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	while (*s1 && (ft_strchr(set, *s1) != NULL))
		s1++;
	length = ft_strlen (s1);
	while (ft_strchr(set, s1[length]) && length != 0)
		length--;
	length = length + 1;
	buffer = ft_substr(s1, 0, length);
	return (buffer);
}
