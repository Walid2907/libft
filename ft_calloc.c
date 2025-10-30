/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:22:13 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/30 18:20:03 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;

	if (size == 0 || nmemb == 0)
		return (malloc(0));
	if (size > (((size_t)-1) / nmemb))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return ((void *)ptr);
}
// int main()
// {
//     int *tab = calloc(0, 0);
//     if (!tab) {
//         printf("Memory allocation failed\n");
//         return (1);
//     }

//     for (int i = 0; i < 5; i++) {
//         printf("%d ", tab[i]); // will print 0 0 0 0 0
//     }

//     free(tab); // free the allocated memory

//     return (0);
// }
