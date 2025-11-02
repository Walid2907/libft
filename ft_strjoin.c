/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:35:53 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/02 19:44:08 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		join_len;
	int		i;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	join_len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(join_len + 1);
	if (str == NULL)
		return (NULL);
	while (i < join_len && *s1 != '\0')
		str[i++] = *(s1++);
	while (i < join_len && *s2 != '\0')
		str[i++] = *(s2++);
	str[i] = '\0';
	return (str);
}