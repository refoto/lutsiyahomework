#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}

int	main()
{
	printf("%d", ft_recursive_factorial(-5));
	printf("%d", ft_recursive_factorial(21));
	printf("%d", ft_recursive_factorial(4));
}
