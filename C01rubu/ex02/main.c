/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 23:08:16 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/05/26 00:18:33 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	x = 10;
	int	y = 20;

	int	*a = &x;
	int	*b = &y;

	printf("------ swaping process------\n");	
	printf("before swapped a is %d and b is %d\n", x, y);

	ft_swap(a, b);
	printf("after swapped a is %d and b is %d\n", x, y);
	return(0);
}
