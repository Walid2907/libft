/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:13:00 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/30 18:21:08 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	if (s == NULL)
		return (0);
	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		*(ptr++) = (unsigned char)c;
		i++;
	}
	return (s);
}
// int main()
// {
// 	int s[4] = {1,2,3,4};
// 	ft_memset(s, 'h', sizeof(s));
// 	for (size_t i=0; i < (sizeof(s)/4);i++)
// 		printf("%c\n",s[i]);
// 	printf("++++++++++++++++++++++++++++++++++++++\n");
// 	int a = 80;
// 	printf("%i\n", a);
// 	char *b = (char *) &a;
// 	char *n = (char *) &a;
// 	ft_memset(b, 90,1);
// 	b++;
// 	ft_memset(b, 89, 1);
// 	b++;
// 	ft_memset(b, 88, 1);
// 	b++;
// 	ft_memset(b, 87, 1);
// 	for (int i = 0 ; i < 4; i++)
// 		printf("%c",n[i]);
// 	printf("\n%c\n",a);
// 	printf("%p\n", a);
// }
