/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbeaucam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:38:11 by dbeaucam          #+#    #+#             */
/*   Updated: 2018/11/12 12:22:39 by dbeaucam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_integer_table(int *tab, int size)
{
	int i;

	i = 1;
	while (i + 1 < size)
	{
		while (tab[i] > tab[i + 1])
		{
			tab[i] = tab[i] + tab[i + 1];
			tab[i + 1] = tab[i] - tab[i + 1];
			tab[i] = tab[i] - tab[i + 1];
			i = 0;
		}
		i++;
	}
}
