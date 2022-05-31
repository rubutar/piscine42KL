#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main()
{
	printf("printable : %d \n", ft_str_is_printable("ABDELKFSCO?I340990%"));
	printf("not printable : %d \n", ft_str_is_printable("\n\t\v\f"));
}
