/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:47:59 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/05/23 17:43:40 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(void)
{
	int	a;
	int	b;

	a = '0';
	while (++a <= 9)
	{
		b = a + 1;
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(',');
		ft_putchar(' ');
	}	
}
