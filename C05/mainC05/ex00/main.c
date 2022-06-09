/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 08:46:11 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/06/06 23:55:44 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main (void)
{
	printf("13! = %d\n", ft_iterative_factorial(13));
	printf("12! = %d\n", ft_iterative_factorial(12));
	printf("1! = %d\n", ft_iterative_factorial(1));
	printf("0! = %d\n", ft_iterative_factorial(0));
	printf("-1! = %d\n", ft_iterative_factorial(-1));
}
