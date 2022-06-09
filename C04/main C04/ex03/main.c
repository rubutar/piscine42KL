/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:01:11 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/06/01 22:58:15 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	spaceminus(char *str, int *ptr_i);

int	ft_atoi(char *str);

int main(void)
{
	char *s = "   ---+---+02234506789ab567";
	printf("%d\n", ft_atoi(s));
	char *s1 = "   ---+143---+01234506789ab567";
	printf("%d\n", ft_atoi(s1));
	char *s2 = "   -1--1223+---+01234506789ab567";
	printf("%d\n", ft_atoi(s2));
}
