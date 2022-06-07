/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:21:35 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/06/07 10:43:04 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_sqrt(int n, int nb)
{
	if (n * n > nb)
	{
		return (0);
	}
	if (n * n == nb)
	{
		return (n);
	}
	else
	{
		return (find_sqrt(n + 1, nb));
	}
}

int	ft_sqrt(int nb)
{
	return (find_sqrt(1, nb));
}
