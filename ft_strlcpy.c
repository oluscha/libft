/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:53:04 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/15 19:53:06 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *source, size_t length)
{
	size_t	i;

	i = 0;
	if (length == 0)
		return (ft_strlen((char *)source));
	if (length)
	{
		while ((source[i]) && (i < (length - 1)))
		{
			dest[i] = source[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(source));
}
