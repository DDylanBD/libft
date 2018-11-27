/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbeaucam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:15:35 by dbeaucam          #+#    #+#             */
/*   Updated: 2018/11/11 15:06:10 by dbeaucam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *str, int c)
{
	char	ct;

	ct = (char)c;
	while (*str && *str != ct)
		str++;
	if (*str != ct)
		return (NULL);
	else
		return ((char *)str);
}
