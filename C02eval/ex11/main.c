#include <unistd.h>

void	ft_putchar(char c)

int	ft_char_is_printable(char c)

void	ft_putstr_non_printable(char *str)

int main (void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien");
	ft_putchar('\n');
	ft_putstr_non_printable("Coucou tu vas bie\t\v\0n");
	ft_putchar('\n');
	ft_putstr_non_printable("");
} 
