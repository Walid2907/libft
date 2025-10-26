/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:56:57 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/25 11:24:12 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s_1;
	unsigned char	*s_2;

	if (s1 == NULL || s2 == NULL)
		return (-1);
	s_1 = (unsigned char *)s1;
	s_2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*s_1 != *s_2)
			return (*s_1 - *s_2);
		s_1++;
		s_2++;
	}
	return (0);
}
// int	main(void)
// {
// 	int	result;
// 	int	result2;

// 	result = ft_memcmp("walida", "walidz", 6);
// 	printf("%d\n", result);
// 	result2 = memcmp("walida", "walidz", 6);
// 	printf("%d\n", result2);
// }
// int main()
// {
//         int a[] = {1, 1, 3, 5, 6};
//         int b[] = {1, 1, 3, 4, 6};
//         int r = ft_memcmp(a, b, 13);
//         printf("%d", r);
// }
// 44 - 4 =