#include"libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}
/*int main()
{
	ft_putchar_fd('5',1);
	return 0;
}*/
