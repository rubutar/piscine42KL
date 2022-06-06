#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{	
	printf("%d\n", ft_iterative_power(2,4));
	printf("%d\n", ft_iterative_power(0,0));
	printf("%d\n", ft_iterative_power(0,8));
	printf("%d\n", ft_iterative_power(-3,2));
	printf("%d\n", ft_iterative_power(-2,-4));
	printf("%d\n\n\n", ft_iterative_power(13,-3));
}
