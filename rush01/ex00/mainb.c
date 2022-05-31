/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:57:26 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/05/29 16:01:27 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putnbr(int nb);
void ft_putchar(char c);
void ft_putstr(char *str);

int ft_atoi(char *str);
int ft_strlen(char *str);
int *get_numbers(char *str);



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_atoi(char *str)
{
	int i;
	int nbr;
	int nbrminus;

	i = 0;
	nbr = 0;
	nbrminus = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			nbrminus++;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + (str[i++] - '0');
	if (nbrminus % 2 == 1)
		return (nbr * -1);
	return (nbr);
}

void ft_putnbr(int nb)
{
	unsigned int nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr / 10 != 0)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

int	ft_verify_numbers(char *val, int i)
{
	int	one;
	int	two;
	int	three;
	int	four;

	one = 0;
	two = 0;
	three = 0;
	four = 0;
	i = 0;
	while (val[i])
	{
		if (val[i] == '1')
			one++;
		else if (val[i] == '2')
			two++;
		else if (val[i] == '3')
			three++;
		else if (val[i] == '4')
			four++;
		if (one > 4 || two > 8 || three > 8 || four > 4)
		{
			ft_putstr("Error\n");
			exit (0);
		}
		i++;
	}

	return (0);
}

int	ft_verify(int ac, char *val)
{
	int	i;

	i = 0;
	if (ac != 2)
	{
		ft_putstr("Error\n");
		exit (0);
	}
	while (val[i])
	{
		if ((val[i] != ' ' && val[i] != '1' && val[i] != '2' && val[i] != '3' && val[i] != '4'))
		{
			ft_putstr("Error\n");
			exit(0);
		}
		else if ((i % 2 != 0) && val[i] != ' ')
		{
			ft_putstr("Error\n");
			exit (0);
		}
		i++;
	}
	ft_verify_numbers(val, i);
	return (0);
}

int *get_numbers(char *str)
{
	int i;
	int j;
	int *tab;

	if (!(tab = malloc(sizeof(int) * 16)))
		return (0);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] >= '0' && str[i] <= '9')
			tab[j++] = ft_atoi(str + i);

return (tab);
}

int solve(int tab[4][4], int entry[16], int pos)

{
	int ent = 0;
	while (ent <= 3)
	{
	if ((entry[ent]+entry[ent+4] > 5) || (entry[ent+8]+entry[ent+12] > 5))
	{
		ft_putstr("Error\n");
		exit (0);
	}
	ent++;
	}

	return (0);
}

void display_solution(int tab[4][4])
{
	int i;
	int j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(tab[i][j]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int tab[4][4] = 
	{
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	};
	int *entry;

	ft_verify(argc, argv[1]);
	entry = get_numbers(argv[1]);
	if (solve(tab, entry, 0) == 0)
		display_solution(tab);
	else
		ft_putstr("Error\n");
	exit (0);
}
