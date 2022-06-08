#include <stdio.h>

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb);

int main (void)
{
	printf("%d -> %d\n", -2316, ft_find_next_prime(-2316));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
	printf("%d -> %d\n", 3, ft_find_next_prime(3));
	printf("%d -> %d\n", 4, ft_find_next_prime(4));
	printf("%d -> %d\n", 5, ft_find_next_prime(5));
	printf("%d -> %d\n", 6, ft_find_next_prime(6));
	printf("%d -> %d\n", 7, ft_find_next_prime(7));
	printf("%d -> %d\n", 8, ft_find_next_prime(8));
	printf("%d -> %d\n", 9, ft_find_next_prime(9));
	printf("%d -> %d\n", 10, ft_find_next_prime(10));
	printf("%d -> %d\n", 11, ft_find_next_prime(11));
	printf("%d -> %d\n", 12, ft_find_next_prime(12));
	return (0);
}