/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 02:31:28 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/05/26 02:50:11 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i =0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i+1])
			{
				swap = tab[i];
				tab[i] = tab[i+1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
