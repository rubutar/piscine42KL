/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:09:35 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/06/09 09:08:51 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	int	index;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
	{
		printf("%d\n", index);
		printf("from : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("to : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("len : %d\n", structs[index].size);
	index++;
	}
}
