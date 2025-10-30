/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:37:49 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/30 18:21:57 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned char	*hay;
	unsigned char	*needle;
	size_t			i;
	size_t			j;

	if (big == NULL || little == NULL)
		return (NULL);
	hay = (unsigned char *)big;
	needle = (unsigned char *)little;
	i = 0;
	if (*needle == '\0')
		return ((char *)big);
	while (hay[i] && i < len)
	{
		j = 0;
		while (i + j < len && *(hay + i + j) == *(needle + j) && *(needle
				+ j) != '\0')
			j++;
		if (*(needle + j) == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
// int main()
// {
//     char *big = "walid";
//     char *little = "wALIDNADI";
//     printf("%s \n", ft_strnstr(big, little, 10));
// 	printf("%s \n", ft_strnstr(big, little, 10));
// space after specifier is required (3andak tnsa)
// }