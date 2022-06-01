#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char src[] = " disini";
	char dest[] = "gabung";
	printf("%s\n", ft_strcat(dest, src));
	
	char src1[] = "rudi";
	char dest1[10] = "saya ";
	printf("%s", strcat(dest1, src1));
}
