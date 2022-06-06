/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:17:54 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/06/03 22:19:50 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

#include <stdio.h>
int	main()
{
	printf("%d \n", ft_recursive_factorial(13));
	printf("%d \n", ft_recursive_factorial(12));
	printf("%d \n", ft_recursive_factorial(1));
	printf("%d \n", ft_recursive_factorial(0));
	printf("%d \n", ft_recursive_factorial(-1));
}

