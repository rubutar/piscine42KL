/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 00:19:36 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/05/26 01:11:59 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a = 20;
	int b = 0;
	int x;
	int y;
	int	*div = &x;
	int	*mod = &y;

	ft_div_mod(a, b, div, mod);
	printf("a / b =  %d \n", x);
	printf("a %% b =  %d \n", y);
	return(0);
}
