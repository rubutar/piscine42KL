/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 00:52:26 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/05/27 01:04:16 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int x=5;
	int y=6;

	int *a = &x;
	int *b = &y;
	
	printf("sebelum diswap %d, %d\n", x, y);
	ft_swap(a, b);
	printf("setelah diswap jadi %d, %d", x, y);
	return(0);
}
