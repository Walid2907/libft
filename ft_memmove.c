/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:57:38 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/26 14:39:59 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (dest == NULL || src == NULL)
		return (NULL);
	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d < s)
	{
		while (i < count)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s && count != 0)
	{
		i = count;
		while ((i--) > 0)
			d[i] = s[i];
	}
	return (dest);
}
// int	main(void)
// {
// 	char s[50] = "abcdef";
// 	ft_memmove(s+2, s, 4);
// 	printf("%s\n", s);
// 	char  b[50] = "abcdef";
// 	ft_memmove(b, b+2, 4);
// 	printf("%s\n", b);
// 		char f[50] = "abcdef";
// 	memmove(f+2, f, 4);
// 	printf("%s\n", f);
// 	char  g[50] = "abcdef";
// 	memmove(g, g+2, 4);
// 	printf("%s\n", g);
// }
