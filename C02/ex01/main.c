#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char src[] = "Hello";
	char dest[] = "World1";

	printf("just copy 1st char : where i = 5 --> %s", ft_strncpy(dest, src, 1));
	printf("\ncopy 5 char : where i = 5 --> %s", ft_strncpy(dest, src, 5));
	printf("\ncopy 7 char : where i = 5 --> %s", ft_strncpy(dest, src, 7));
}
