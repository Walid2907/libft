/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:14:02 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/30 18:21:44 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	if (dest == NULL || src == NULL)
		return (0);
	src_len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (src_len);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
// int	main(void)
// {
// 	char	*src;
// 	char	*dest;

// 	src = "hello world";
// 	ft_strlcpy(dest, src, 9);
// 	printf("%s\n", dest);
// 	printf("%s\n", src);
// }
