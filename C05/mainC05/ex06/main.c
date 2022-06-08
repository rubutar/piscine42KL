#include <stdio.h>

int	ft_is_prime(int nb);

int	main()
{
	printf("is -5 prime = %d\n", ft_is_prime(-5));
	printf("is 0 prime = %d\n", ft_is_prime(0));
	printf("is 3 prime = %d\n", ft_is_prime(3));
	printf("is 9 prime = %d\n", ft_is_prime(9));
	printf("is 1777 prime = %d\n", ft_is_prime(1777));

}
