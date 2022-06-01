#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{


}

int main (void)
{
	char src[] = "Born to code";
    	char dest [] = "1337 42";
    	printf("%i \n", ft_strlcat(dest, src, 15));
    	printf("%s \n", dest);
    	

	char src1[] = "Born to code";
    	char dest1[20] = "1337 42";
	printf("%lu \n", strlcat(dest1, src1, 20));
    	printf("%s \n", dest1);
}	
