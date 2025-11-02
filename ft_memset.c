/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:13:00 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/02 15:35:43 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	if (s == NULL)
		return (0);
	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		*(ptr++) = (unsigned char)c;
		i++;
	}
	return (s);
}
