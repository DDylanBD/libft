/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbeaucam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:23:09 by dbeaucam          #+#    #+#             */
/*   Updated: 2018/11/11 15:00:04 by dbeaucam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*str;

	str = dest;
	while (*str)
		str++;
	while (*src && n)
	{
		*str = *src;
		++src;
		++str;
		n--;
	}
	*str = '\0';
	return (dest);
}
