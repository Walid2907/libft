/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:04:08 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/30 18:22:02 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	start = 0;
	if (*s1 == '\0' || start > end)
		return (ft_strdup(""));
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	new = ft_substr(s1, start, ((end - start) + 1));
	return (new);
}
// int	main(void)
// {
// 	char *s = "xxyzhitijniutxyz";
// 	char *move = "z";
// 	char *str = ft_strtrim(s, move);
// 	printf("%s", str);
// 	// lwaid
// }