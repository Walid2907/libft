/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:16:32 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/02 19:44:01 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*new_str;
	size_t	i;
	size_t	len;

	if (s == NULL)
		return (NULL);
	str = (char *)s;
	len = ft_strlen(str);
	new_str = malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		*(new_str + i) = *(str);
		str++;
		i++;
	}
	*(new_str + i) = '\0';
	return ((char *)new_str);
}