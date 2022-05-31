#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main()
{
	char src[] = "where?";
	char dest[] = "here";
	printf("%s", ft_strcpy(dest, src));
}
