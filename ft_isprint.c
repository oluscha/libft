/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:54:54 by lschwart          #+#    #+#             */
/*   Updated: 2021/10/10 13:54:56 by lschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_isprint(int num)
{
	if (num >= 32 && num <= 126)
		return (1);
	return (0);
}
/*
int main(void)
{
	int	p;
//	p = ft_isprint(' ' - 1);
	printf("%d", p);
	return (0);
}
*/
