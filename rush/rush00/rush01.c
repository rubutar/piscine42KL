/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:18:32 by cocheong          #+#    #+#             */
/*   Updated: 2022/05/22 18:49:04 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(void)
{	
	write(1, "error", 5);
}

void	ft_while(int x, int i, int y, int j)
{
	while (i < x)
	{
		if (i == 0 && j == 0)
		{
			ft_putchar ('/');
		}
		else if ((i == x - 1 && j == 0) || (i == 0 && j == y - 1))
		{
			ft_putchar ('\\');
		}
		else if (i == x - 1 && j == y - 1)
		{
			ft_putchar ('|');
		}	
		else if ((j == 0 || j == y - 1) || (i == 0 || i == x - 1))
		{
			ft_putchar ('*');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}	
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x < 1 || y < 1)
	{
		ft_putstr();
		return ;
	}
	while (j < y)
	{
		i = 0;
		ft_while(x, i, y, j);
		j++;
		ft_putchar('\n');
	}
}
