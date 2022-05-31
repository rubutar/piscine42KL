#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main()
{
       printf("the input is all uppercase%d", ft_str_is_uppercase("ABCDEFGH"));
       printf("\nthe input is mixed uc and lc%d", ft_str_is_uppercase("AbcdEFGHaI"));
       printf("\nthe input is mixed num and char%d", ft_str_is_uppercase("-_134556ABCDEFGaH67"));
}
