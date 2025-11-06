/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:30:42 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/04 13:01:41 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long			lent;
	unsigned char	*str;

	if (s == NULL)
		return (NULL);
	lent = ft_strlen(s);
	str = (unsigned char *)s;
	while (lent >= 0)
	{
		if (*(str + lent) == (unsigned char)c)
			return ((char *)(s + lent));
		lent--;
	}
	return (NULL);
}
