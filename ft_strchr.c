/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:24:19 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/30 18:21:29 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	unsigned char	*s;

	if (str == NULL)
		return (NULL);
	s = (unsigned char *)str;
	if (c == '\0')
		return ((char *)(s + ft_strlen(str)));
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
// int	main(void)
//{
//	// char c = 'i';
//	printf("%s \n", ft_strchr("walid", '\0'));
//}
