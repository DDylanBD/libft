/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbeaucam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:48:18 by dbeaucam          #+#    #+#             */
/*   Updated: 2018/11/12 12:06:42 by dbeaucam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *des;

	des = (unsigned char*)s;
	while (n)
	{
		if (*des == (unsigned char)c)
		{
			return (des);
		}
		des = des + 1;
		n--;
	}
	return (NULL);
}
