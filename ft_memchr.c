/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:53:13 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/25 11:23:57 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	if (s == NULL)
		return (NULL);
	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		if (*(ptr + i) == (char)c)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (0);
}
// int main ()
// {
//     // char *s =  ;
//     // //char *d = "walid";         //(s,'l',3)
//     // char *ptr = );

// 	//printf("1");
//     printf("%p \n",ft_memchr("alidnadi",'w',2));
// 	ft_memchr("alidnadi",'w',2);
// }