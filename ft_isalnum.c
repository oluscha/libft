/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:46:27 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/06 15:46:30 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isalnum(int symbol)
{
	if ((symbol >= 65 && symbol <= 90) || (symbol >= 97 && symbol <= 122)
		|| (symbol >= 48 && symbol <= 57))
		return (1);
	return (0);
}
