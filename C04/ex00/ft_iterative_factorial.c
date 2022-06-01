/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 08:46:11 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/06/01 10:00:53 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_iterative_factorial(int	nb)
{
	int	result;

	result = 1;
	while (nb > 0 && nb < 13)
	{
		result *= nb;
		nb--;
	}
	if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	return (result);
}


#include <stdio.h>
int	main ()
{
	printf("%d\n", ft_iterative_factorial(13));
	printf("%d\n", ft_iterative_factorial(12));
	printf("%d\n", ft_iterative_factorial(-1));
	printf("%d\n", ft_iterative_factorial(0));
}
