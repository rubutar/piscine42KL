/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:13:23 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/06/09 09:56:20 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include "ft_show_tab.c"


int	main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
}

