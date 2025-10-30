/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:35:43 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/30 18:21:02 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (n != 0 && src == NULL && dest == NULL)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// int	main(void)
// {
//     char  b[20] = "dy";
// 	char s[20] = "";
// 	ft_memcpy(b, s, 3);
// 	printf("%s\n" ,s);
// 	printf("%s\n", b);
// 	char d[20] = "dy";
// 	char a[20] = "";
// 	memcpy(d, a, 3);
// 	printf("%s\n", a);
// 	printf("%s\n", d);
// }
