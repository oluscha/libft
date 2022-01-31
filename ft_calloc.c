/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:53:28 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/10 13:53:33 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*buffer;

	if (!count)
		count = 1;
	if (!size)
		size = 1;
	buffer = (char *) malloc(size * count);
	if (buffer == NULL)
		return (NULL);
	else
		return (ft_memset(buffer, 0, count * size));
}
