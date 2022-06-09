/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:17:54 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/06/07 09:16:20 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

#include <stdio.h>
int	main()
{
	printf("13! = %d \n", ft_recursive_factorial(13));
	printf("12! = %d \n", ft_recursive_factorial(12));
	printf("1! = %d \n", ft_recursive_factorial(1));
	printf("0! = %d \n", ft_recursive_factorial(0));
	printf("-1! = %d \n", ft_recursive_factorial(-1));
}

