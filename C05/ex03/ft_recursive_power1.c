int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
	{
		nb *= ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
