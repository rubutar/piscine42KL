#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src [j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	main()
{
	char src[] = " Networrk";
	char dest[50] = "42";
	printf("%s \n", ft_strncat(dest, src, 7));

	char src1[] = " Networrk";
	char dest1[50] = "42";

	printf("%s", strncat(dest1, src1, 7));
}
