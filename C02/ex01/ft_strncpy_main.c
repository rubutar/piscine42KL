#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char src[] = "darisini";
	char dest[] = "kesana";

	printf("unsigne 3 : %s", ft_strncpy(dest, src, 3));
	printf("\n unsigned 5 : %s", ft_strncpy(dest, src, 5));
	printf("\n unsigned 8 : %s", ft_strncpy(dest, src, 8));
}
