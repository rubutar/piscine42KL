#include <unistd.h>
void	ft_putchar(char c);

void	ft_putnbr(int nb);

int main (void)
{
	ft_putnbr(-2147483648);
	ft_putnbr(9);
	ft_putnbr(4562);
	ft_putnbr(-116445);
}
