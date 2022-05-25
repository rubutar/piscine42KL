/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:15:41 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/05/26 01:36:29 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int x = 55;
	int y = 10;

	ft_ultimate_div_mod(&x, &y);
	printf("a / b = %d\n", x);
	printf("a %% b = %d\n", y);
	return(0);
}
