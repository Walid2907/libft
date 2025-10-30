/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:28:58 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/30 18:21:23 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *str, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == '\0' || str[i + 1] == c))
			counter++;
		i++;
	}
	return (counter);
}

static void	free_split(char **arr, int n)
{
	while (n > 0)
	{
		n--;
		free(arr[n]);
	}
	free(arr);
}

static char	**fill(char const *s, char **tab, char c, size_t words)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		tab[j] = ft_substr(s, start, (i - start));
		if (tab[j] == NULL)
		{
			free_split(tab, j);
			return (NULL);
		}
		j++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**tab;

	if (!s)
		return (NULL);
	words = (int)count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	if (fill(s, tab, c, words) == NULL)
		return (NULL);
	tab[words] = NULL;
	return (tab);
}
// #include<stdio.h>

// int main()
// {
// 	char *s = "split  ||this|for|me|||||!|";
// 	int i = 0;
// 	char **result = ft_split(s, '|');
// 	if (!result)
// 		return (1);
// 	while (result[i])
// 	{
// 		printf("%s\n",result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// }
/*int	main(void)
{
	char **result;
	int i;

	// Test 1
	result = ft_split("Hello        ,World 42 Network", ' ');
	i = 0;
	printf("Test 1:\n");
	while (result[i] != NULL)
	{
		printf("Word %d: %s1\n", i, result[i]);
		i++;
	}

	// Test 2
	result = ft_split(",,,abc,,,def,,ghi", ',');
	i = 0;
	printf("\nTest 2:\n");
	while (result[i] != NULL)
	{
		printf("Word %d: %s\n", i, result[i]);
		i++;
	}

	// Test 3
	result = ft_split("one;two;three;four", ';');
	i = 0;
	printf("\nTest 3:\n");
	while (result[i] != NULL)
	{
		printf("Word %d: %s\n", i, result[i]);
		i++;
	}

	// Test 4 (empty string)
	result = ft_split("", ' ');
	i = 0;
	printf("\nTest 4:\n");
	while (result[i] != NULL)
	{
		printf("Word %d: %s\n", i, result[i]);
		i++;
	}

	return (0);
}*/
