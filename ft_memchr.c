/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:53:13 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/03 21:03:11 by wkerdad          ###   ########.fr       */
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
			return ((void *)ptr + i);
		}
		i++;
	}
	return (0);
}
