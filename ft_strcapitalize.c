/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbeaucam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:05:16 by dbeaucam          #+#    #+#             */
/*   Updated: 2018/07/10 18:04:20 by dbeaucam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_strlowcase(char *str, int i)
{
	if (str[i] >= 65 && str[i] <= 90)
		str[i] = str[i] += 32;
}

static void		ft_strupcase(char *str, int i)
{
	if (str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] -= 32;
}

char			*ft_strcapitalize(char *str)
{
	int			i;

	i = 0;
	ft_strupcase(str, i);
	while (str[i + 1])
	{
		if ((str[i] >= 32 && str[i] <= 47) ||
				(str[i] >= 58 && str[i] <= 63) ||
				(str[i] >= 91 && str[i] <= 96) ||
				(str[i] >= 123 && str[i] <= 127))
			ft_strupcase(str, i + 1);
		else
			ft_strlowcase(str, i + 1);
		i++;
	}
	return (str);
}
