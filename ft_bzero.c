/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:01:59 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/02 19:42:58 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	if (s == NULL)
		return ;
	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		*ptr = 0;
		ptr++;
		i++;
	}
}
