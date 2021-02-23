#include <stdio.h>

int	ft_fibonacci(int index)
{
	int answer;

	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	answer = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (answer);
}

int main()
{
	printf("%d", ft_fibonacci(7));
	printf("%d", ft_fibonacci(2));
	printf("%d", ft_fibonacci(1));
	printf("%d", ft_fibonacci(0));
	printf("%d", ft_fibonacci(-2));
	return (0);
}
