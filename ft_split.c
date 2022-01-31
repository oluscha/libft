/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:42:35 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/15 19:42:38 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static size_t	ft_part_length(char const *s, char c)
{
	size_t	result;
	char	*buffer;
	int		i;

	result = 0;
	i = 0;
	buffer = (char *)s;
	while (buffer[i] && buffer[i] != c)
	{
		result++;
		i++;
	}
	return (result);
}

static size_t	ft_overall_parts(char const *s, char c)
{
	size_t	result;
	int		i;

	result = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			result++;
			while (s[i] != c && s[i])
				i++;
			i--;
		}
		i++;
	}
	return (result);
}

static void	ft_memory_help(char **buffer, size_t number_of_strings)
{
	if (!buffer)
	{
		number_of_strings = number_of_strings - 1;
		while (number_of_strings >= 0)
		{
			free(buffer[number_of_strings]);
			number_of_strings--;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	size_t	number_of_strings;

	if (!s)
		return (NULL);
	number_of_strings = 0;
	buffer = (char **)malloc(sizeof(char *) * (ft_overall_parts(s, c) + 1));
	if (!buffer)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			buffer[number_of_strings] = ft_substr(s, 0, ft_part_length(s, c));
			ft_memory_help(buffer, number_of_strings);
			s = s + ft_part_length(s, c);
			number_of_strings++;
		}
		else
			s++;
	}
	buffer[number_of_strings] = NULL;
	return (buffer);
}
