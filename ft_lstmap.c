/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 10:56:59 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/01 11:33:56 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_head;
    t_list *new_node;

    if (!lst || !f)
        return (NULL);

    new_head = NULL;
    while (lst)
    {
        new_node = ft_lstnew(f(lst->content));
        if (!new_node)
        {
            ft_lstclear(&new_head, del);
            return (NULL);
        }
        ft_lstadd_back(&new_head, new_node);
        lst = lst->next;
    }
    return (new_head);
}
// void	*add_exclamation(void *content)
// {
// 	char	*str;
// 	char	*new_str;
// 	char	*tmp;

// 	str = (char *)content;

// 	// join content + "!"
// 	tmp = ft_strdup("!");
// 	if (!tmp)
// 		return (NULL);
// 	new_str = ft_strjoin(str, tmp);
// 	free(tmp);
// 	return (new_str);
// }

// /* -------------------------------
//    Function to delete content
//    ------------------------------- */
// void	del_str(void *content)
// {
// 	free(content);
// }

// /* -------------------------------
//    Main test
//    ------------------------------- */
// int	main(void)
// {
// 	t_list	*lst = NULL;
// 	t_list	*new_lst;
// 	t_list	*tmp;

// 	// Create the original list (using ft_strdup)
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("hi")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("hello")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("hey")));

// 	// Map the list using your ft_lstmap
// 	new_lst = ft_lstmap(lst, add_exclamation, del_str);

// 	// Print original list
// 	printf("Original list:\n");
// 	tmp = lst;
// 	while (tmp)
// 	{
// 		printf("  %s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}

// 	// Print new list
// 	printf("\nMapped list:\n");
// 	tmp = new_lst;
// 	while (tmp)
// 	{
// 		printf("  %s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}

// 	// Free both lists
// 	ft_lstclear(&lst, del_str);
// 	ft_lstclear(&new_lst, del_str);
// 	return (0);
// }
