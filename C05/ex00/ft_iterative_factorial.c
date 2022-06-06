/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 08:46:11 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/06/03 21:50:26 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
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