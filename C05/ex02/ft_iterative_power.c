/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:26:04 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/06/03 23:26:09 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			result = nb * result;
		power--;
		}
		return (result);
	}
}
