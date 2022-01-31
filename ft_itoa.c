/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:55:10 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/10 13:55:12 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_new(int nb)
{
	int	length;

	length = 0;
	if (nb <= 0)
	{
		nb = -nb;
		length++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int nb)
{
	char	*buffer;
	int		length;

	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	length = ft_strlen_new(nb);
	buffer = (char *) malloc((sizeof(char)) * (length + 1));
	if (!buffer)
		return (NULL);
	buffer[length--] = '\0';
	if (nb == 0)
		buffer[0] = 48;
	if (nb < 0)
	{
		nb = -nb;
		buffer[0] = '-';
	}
	while (nb > 0)
	{
		buffer[length] = (nb % 10) + 48;
		nb = nb / 10;
		length--;
	}
	return ((char *)buffer);
}
