/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbeaucam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:07:22 by dbeaucam          #+#    #+#             */
/*   Updated: 2018/11/11 11:51:41 by dbeaucam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char		*dest;
	const char	*src;
	int			c;

	c = 0;
	dest = str1;
	src = str2;
	while (n)
	{
		dest[c] = src[c];
		c++;
		n--;
	}
	return (dest);
}
