/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:53:19 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/30 18:21:34 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
// void to_upper(unsigned int i, char *c)
// {
//     (void)i; // not used
//     if (*c >= 'a' && *c <= 'z')
//         *c -= 32;
// }
// int main(void)
// {
//     char str[] = "hellowalid3";
//     ft_striteri(str, to_upper);
//     printf("%s\n", str); // HELLO
// }