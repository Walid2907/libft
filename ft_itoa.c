/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:10:45 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/02 14:51:27 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	reverse(char *str)
{
	char	temp;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(str) - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		end--;
		start++;
	}
}

static int	count_numb(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*fill(char *str, size_t nm, int isnegative)
{
	int	i;

	i = 0;
	while (nm > 0)
	{
		str[i] = (nm % 10) + '0';
		nm = nm / 10;
		i++;
	}
	if (isnegative == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		isnegative;
	char	*str;
	size_t	nm;

	isnegative = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		isnegative = 1;
		nm = -(size_t)n;
	}
	if (n > 0)
		nm = n;
	str = malloc(count_numb(n) + 1 + isnegative);
	if (str == NULL)
		return (NULL);
	fill(str, nm, isnegative);
	reverse(str);
	return (str);
}
