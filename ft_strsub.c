/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbeaucam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 12:59:22 by dbeaucam          #+#    #+#             */
/*   Updated: 2018/11/12 11:22:41 by dbeaucam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;

	i = 0;
	if (s)
	{
		if (!(tab = ft_strnew(len)))
			return (NULL);
		s = s + start;
		while (i < len)
		{
			tab[i] = s[i];
			i++;
		}
		return (tab);
	}
	return (NULL);
}
