/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:53:19 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/28 14:08:48 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    if (s == NULL || f == NULL)
        return (NULL);
    size_t s_len;
    size_t  i;
    
    i = 0;
    s_len = ft_strlen(s);
    while (s[i] != '\0')
    {
       f(i,&s[i]);
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