#include"libft.h"

char *ft_itoa(int n)
{
    int i = 0;
    int d = n;
    char *str;

    if (n == -2147483648)
        return ft_strdup("-2147483648");
    if (n <= 0)
        i = 1;
    while (d != 0)
    {
        d = d / 10;
        i++;
    }
    str = malloc(i + 1);
    if (str == NULL)
        return NULL;
    str[i] = '\0';
    i -= 1;
    if (d < 0)
        str[0] = '-';
    if (n < 0)
        n = -n;
    if (n == 0)
    {
        str[0] = '0';
        return (str);
    }
    while (n > 0)
    {
        str[i] = (n % 10) + '0';
        n = n / 10;
        i--;
    }
    return (str);
}

int main()
{
	char *str = ft_itoa(29012007);
	printf("%s",str);
	free(str);
}
               
