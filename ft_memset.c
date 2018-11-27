/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbeaucam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 11:58:01 by dbeaucam          #+#    #+#             */
/*   Updated: 2018/11/11 15:41:15 by dbeaucam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *str, int n, size_t len)
{
	char	*tmp;

	tmp = (char *)str;
	while (len-- > 0)
		*tmp++ = (char)n;
	return (str);
}
