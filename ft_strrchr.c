/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbeaucam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:05:03 by dbeaucam          #+#    #+#             */
/*   Updated: 2018/11/11 13:08:09 by dbeaucam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char ct;
	char *t;

	t = NULL;
	ct = (char)c;
	while (*str)
	{
		if (*str == ct)
			t = (char*)str;
		str++;
	}
	if (*str == ct)
		return ((char*)str);
	else
		return (t);
	return (NULL);
}
