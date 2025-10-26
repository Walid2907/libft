/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:35:43 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/24 18:17:13 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (src == NULL || dest == NULL)
		return (NULL);
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
//     char  b[20] = "123456789lll";
// 	char s[20] = "hello walid nadi";
// 	ft_memcpy(b, s, 30);
// 	printf("%s\n" ,s);
// 	printf("%s\n", b);
// 	char d[20] = "123456789";
// 	char a[20] = "hello walid nadi";
// 	memcpy(d, a, 30);
// 	printf("%s\n", a);
// 	printf("%s\n", d);
// }
