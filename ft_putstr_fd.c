#include"libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, &*s, 1);
		s++;
	}
}

/*int main()
{
	ft_putstr_fd("wafhudbvnousvavjnasnvi\nevisdvbiua\n",1);
}*/
