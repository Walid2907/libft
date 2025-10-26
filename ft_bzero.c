/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:01:59 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/24 18:17:42 by wkerdad          ###   ########.fr       */
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
// int main()
// {
// 	int tab[]={1,5,7,4,9};
// 	ft_bzero(tab,sizeof(tab));
// 	for(int  i = 0; i <=4;i++)
// 	{
// 		printf("%c",tab[i]);
// 	}
// }
