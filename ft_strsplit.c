/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbeaucam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:16:03 by dbeaucam          #+#    #+#             */
/*   Updated: 2018/11/12 11:16:10 by dbeaucam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_str_next(const char *str, char c, int sk)
{
	if (sk)
		while (*str && *str == c)
			str++;
	else
		while (*str && *str != c)
			str++;
	return (str);
}

static char			**ft_tabedel(char **r, int len)
{
	int				i;

	i = 0;
	while (i < len)
		free(r[i]);
	free(r);
	return (NULL);
}

static int			ft_str_count(const char *str, int seq)
{
	int				i;

	i = 0;
	while (*str)
	{
		str = ft_str_next(str, seq, 1);
		if (*str)
		{
			i++;
			str = ft_str_next(str, seq, 0);
		}
	}
	return (i);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**r;
	int				i;
	const char		*nx;

	if (s == NULL)
		return (NULL);
	r = (char**)malloc(sizeof(char*) * (ft_str_count(s, c) + 1));
	if (r == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		s = ft_str_next(s, c, 1);
		if (*s)
		{
			nx = ft_str_next(s, c, 0);
			r[i] = ft_strsub(s, 0, nx - s);
			if (r[i] == NULL)
				return (ft_tabedel(r, i));
			i++;
			s = nx;
		}
	}
	r[i] = 0;
	return (r);
}
