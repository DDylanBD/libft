/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbeaucam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 17:55:49 by dbeaucam          #+#    #+#             */
/*   Updated: 2018/11/29 18:54:00 by dbeaucam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa_base(int value, int base)
{
	static char	rep[] = "0123456789abcdef";
	static char	buf[50];
	char		*ptr;
	int			num;

	ptr = &buf[49];
	*ptr = '\0';
	num = value;
	if (value < 0 && base == 10)
		value *= -1;
	if (value == 0)
		*--ptr = rep[value % base];
	while (value != 0)
	{
		*--ptr = rep[value % base];
		value /= base;
	}
	if (num < 0 && base == 10)
		*--ptr = '-';
	return (ptr);
}
