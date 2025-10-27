#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(1, "-2147483648", 11);
		}
		else
		{
			write(1, "-", 1);
			n = -n;
		}
	}
	if (n >= 10)
	{
		ft_putnbr_fd((n / 10), fd);
	}
		ft_putchar_fd((n % 10 + '0'), fd);
}
int main()
{
	ft_putnbr_fd(0, 1);
}
