/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbeaucam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 11:12:06 by dbeaucam          #+#    #+#             */
/*   Updated: 2018/11/11 16:09:50 by dbeaucam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *str1, const void *str2, int d, size_t n)
{
	char	*dest;
	char	*src;

	dest = (char *)str1;
	src = (char *)str2;
	while (n)
	{
		*(dest++) = *src;
		if (*(src++) == (char)d)
			return (dest);
		n--;
	}
	return (NULL);
}
