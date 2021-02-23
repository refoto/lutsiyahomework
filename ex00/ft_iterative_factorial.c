#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;
	int answer;
	
	if (nb < 0 || nb > 12)
		return (0);

	if (nb == 0)
		return (1);

	i = 1;
	answer = 1;
	while (i <= nb)
	{
		answer = answer * i;
		i++;
	}
	return (answer);
}

int main()
{
	printf("%d", ft_iterative_factorial(13));
	printf("%d", ft_iterative_factorial(0));
	printf("%d", ft_iterative_factorial(-5));
	return (0);
}
