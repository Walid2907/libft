/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:30:42 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/30 18:21:59 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	*str;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = (unsigned char *)s;
	while (len >= 0)
	{
		if (*(str + len) == (unsigned char)c)
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}
// int	main(void)
// {
// 	int c = '\0';
// 	printf("%s \n", ft_strrchr("awalid nadi dblaza", c));
// }