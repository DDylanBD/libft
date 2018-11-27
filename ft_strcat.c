/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbeaucam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:46:00 by dbeaucam          #+#    #+#             */
/*   Updated: 2018/11/11 15:16:52 by dbeaucam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int set;

	i = 0;
	set = 0;
	while (dest[set])
		set++;
	while (src[i])
	{
		dest[set + i] = src[i];
		i++;
	}
	dest[set + i] = '\0';
	return (dest);
}
