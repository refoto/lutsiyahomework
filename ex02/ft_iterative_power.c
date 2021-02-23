#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int answer;
	
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	answer = 1;
	while (i <= power)
	{
		answer = answer * nb;
		i++;
	}
	return (answer);
}

int main()
{
	printf("%d", ft_iterative_power(2 , 4));
	printf("%d", ft_iterative_power(2, -1));
	printf("%d", ft_iterative_power(0, 0));
}
