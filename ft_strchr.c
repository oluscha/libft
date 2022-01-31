/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:51:54 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/15 19:51:57 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	unsigned char	*buffer;
	int				i;

	i = 0;
	buffer = (unsigned char *)str;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == (char)ch)
			return ((char *)(buffer + i));
		i++;
	}
	if (buffer[i] == (char)ch)
		return ((char *)(buffer + i));
	return (0);
}

/*int main(void)
{
	char s[] = "tripouille";
	printf("%c", ft_strchr(s, 't' + 256));
	return (0);
}

*/
