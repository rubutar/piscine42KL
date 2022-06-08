#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{	
	printf("2 power 4 = %d\n", ft_iterative_power(2,4));
	printf("0 power 0 = %d\n", ft_iterative_power(0,0));
	printf("0 power 8 = %d\n", ft_iterative_power(0,8));
	printf("-3 power 2 = %d\n", ft_iterative_power(-3,2));
	printf("-2 power -4 = %d\n", ft_iterative_power(-2,-4));
	printf("13 power -3 = %d\n\n\n", ft_iterative_power(13,-3));
}
