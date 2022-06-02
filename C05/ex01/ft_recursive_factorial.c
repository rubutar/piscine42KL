/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:17:54 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/06/01 10:19:03 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0)
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	else
	{
		return (0);
	}
	return (nb);
}

#include <stdio.h>
int	main()
{
	printf("%d \n", ft_recursive_factorial(2));
	//printf("%d \n", ft_recursive_factorial(12));
	//printf("%d \n", ft_recursive_factorial(2));
	//printf("%d \n", ft_recursive_factorial(0));
	//printf("%d \n", ft_recursive_factorial(-1));
}

