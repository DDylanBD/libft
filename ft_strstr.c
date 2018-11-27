/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbeaucam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:14:51 by dbeaucam          #+#    #+#             */
/*   Updated: 2018/11/11 17:31:25 by dbeaucam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *haystack, const char *needle)
{
	const char	*test;
	const char	*str;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		test = needle;
		str = haystack;
		while (*haystack == *test && *haystack && *test)
		{
			++test;
			++haystack;
		}
		if (!*test)
			return ((char*)str);
		haystack = str + 1;
	}
	return (NULL);
}
