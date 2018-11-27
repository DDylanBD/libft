/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbeaucam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:09:04 by dbeaucam          #+#    #+#             */
/*   Updated: 2018/11/11 11:57:49 by dbeaucam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*dest;
	char	*src;

	dest = (char *)str1;
	src = (char *)str2;
	if (dest > src)
	{
		dest = dest + n - 1;
		src = src + n - 1;
		while (n > 0)
		{
			*dest-- = *src--;
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*dest++ = *src++;
			n--;
		}
	}
	return (str1);
}
