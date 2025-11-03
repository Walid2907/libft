/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:04:53 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/03 21:06:32 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub_str;
	size_t		i;
	size_t		new_len;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	new_len = ft_strlen((s + start));
	if (len > new_len)
		sub_str = malloc(new_len + 1);
	else
		sub_str = malloc(len + 1);
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while (s[i + start] != '\0' && i < len)
	{
		sub_str[i] = s[i + start];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
