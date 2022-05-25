#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int	*nbr;
	int	num;
	
	nbr = &num;
	ft_ft(nbr);
	printf("%d", num);
}
