/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:24:19 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/25 11:35:03 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	*s;

	if (str == NULL)
		return (NULL);
	s = (unsigned char *)str;
	if (c == '\0')
		return ((char *)s);
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
// int main()
// {
// 	// char c = 'i';
// 	printf("%s \n",ft_strchr("walid",'u'));
// }
