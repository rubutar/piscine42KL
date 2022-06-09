#include <stdio.h>
int	checkerror(char *str);

int	nb_base(char str, char *base);

int	whitespaces(char *str, int *ptr_i);

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("%d\n", ft_atoi_base("	+++++--133742", "0123456789"));
	printf("%d\n", ft_atoi_base("	     ---101010", "01"));
	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));
}
