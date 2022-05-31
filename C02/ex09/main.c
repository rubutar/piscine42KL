#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str);

int	main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("salut, comment tu vas ? 42mots quara    nte-deux; cinquante+et+un --> %s", ft_strcapitalize(str));
}
