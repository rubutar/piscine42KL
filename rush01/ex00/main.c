#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void ft_putnbr(int nb);
void ft_putchar(char c);
void ft_putstr(char *str);

int ft_atoi(char *str);
int ft_strlen(char *str);
int *get_numbers(char *str);
int check(int ac, char **av);
int check_double(int tab[4][4], int pos, int num);
int check_case(int tab[4][4], int pos, int entry[16]);


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
			ft_putstr("Error4\n");
			return (0);
		}
		i++;
	}
	//ft_putstr("1 2 3 4\n");
	//ft_putstr("2 3 4 1\n");
	//ft_putstr("3 4 1 2\n");
	//ft_putstr("4 1 2 3\n");
	return (0);
}

int	ft_verify(int ac, char *val)
{
	int	i;

	i = 0;
	if (ac != 2)
	{
		ft_putstr("Error3\n");
		return (0);
	}
	while (val[i])
	{
		if ((val[i] != ' ' && val[i] != '1' && val[i] != '2' && val[i] != '3' && val[i] != '4'))
		{
			ft_putstr("Error2\n");
			return (0);
		}
		else if ((i % 2 != 0) && val[i] != ' ')
		{
			ft_putstr("Error1\n");
			return (0);
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


	tab = malloc(sizeof(int) * 16);	      
	i = -1;
	j = 0;
	while (str[++i] != '\0')
	  if (str[i] >= '1' && str[i] <= '4')
		    tab[j++] = ft_atoi(str + i);
	
	return (tab);
	
}



int	main(int argc, char **argv)
{
	int tab[4][4] = {
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
	};
	int *entry;

	ft_verify(argc, argv[1]);

	entry = get_numbers(argv[1]);
	printf("%d", *entry);

	//	go to solution
       
	//else
		ft_putstr("didn't find any solution sorry");
	return (0);
}
