/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:57:38 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/02 15:32:01 by wkerdad          ###   ########.fr       */
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
