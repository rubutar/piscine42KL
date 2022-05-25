/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:39:35 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/05/23 10:23:40 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int a;
	int b;
	
	a = 0;
	while(a <= 99)
	{
		b = a+1;
		while (b <= 99)
		{
			write (1, 48 + a / 10, 1);
			write (1, 48 + a % 10, 1);
			write (1, " ", 1);
			write (1, 48 + b / 10, 1);	
			write (1, 48 + a % 10, 1);
			write (1, ", ", 2);
		b++;
		}
	a++;
	}

}

int	main(void)
{
	ft_print_comb2();
	return(0);
}
