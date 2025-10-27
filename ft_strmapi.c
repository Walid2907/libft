/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:22:01 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/27 18:38:40 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t s_len;
    unsigned char *result;
    size_t  i;
    
    i = 0;
    s_len = ft_strlen(s);
    result = malloc(s_len + 1);
    if(result == NULL)
        return (NULL);
    while (s[i] != '\0')
    {
        result[i] = f (i,s[i]);
        i++;
    }
    result[i] = '\0';
    return (0);
}