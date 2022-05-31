#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main()
{
	printf("the input is all lowercase : %d", ft_str_is_lowercase("abijkl"));
	printf("\n the input is mixed lc and UC : %d", ft_str_is_lowercase("abcAdefghijkl"));
	printf("\n the input is mixed num and char : %d", ft_str_is_lowercase("-_556efSghij67"));
}
