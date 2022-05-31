#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main()
{
	printf("numeric input %d\n", ft_str_is_numeric("01943"));
	printf("mix input %d\n", ft_str_is_numeric("048i882j489"));
	printf("alphabetic input %d\n", ft_str_is_numeric("jssdlkc,"));
}
