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

int	ft_sqrt(int nb)
{
	long int	index;

	index = 1;
	if (nb == 0)
		return (0);
	while (nb > index * index)
		index++;
	if (nb == index * index)
		return (index);
	else
		return (0);
}
