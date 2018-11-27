/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbeaucam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 12:53:02 by dbeaucam          #+#    #+#             */
/*   Updated: 2018/11/11 17:26:37 by dbeaucam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	const char	*str;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	str = s + (ft_strlen(s) - 1);
	while (*str == ' ' || *str == '\n' || *str == '\t')
	{
		str--;
	}
	str = ft_strsub(s, 0, str - s + 1);
	return ((char*)str);
}
