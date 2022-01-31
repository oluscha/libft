/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:00:29 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/10 14:00:31 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	length;

	length = ft_strlen(needle);
	if (!needle[0])
		return ((char *)haystack);
	if (!haystack[0] || (len == 0))
		return (NULL);
	if (len > 0)
	{
		while (*haystack != '\0' && len >= length)
		{
			if ((*haystack == *needle)
				&& (ft_memcmp(haystack, needle, length) == 0))
				return ((char *)haystack);
			haystack++;
			len--;
		}
	}
	else
		return (NULL);
	return (NULL);
}

/*int main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";
	printf("%s", ft_strnstr(empty, "", -1));
	return (0);
}

*/
