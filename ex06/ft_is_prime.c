#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return(0);	
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	printf("%d", ft_is_prime(3));
	printf("%d", ft_is_prime(0));
	printf("%d", ft_is_prime(-5));
	printf("%d", ft_is_prime(1));
	printf("%d", ft_is_prime(8));
}
