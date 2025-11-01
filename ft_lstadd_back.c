/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:31:18 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/01 11:50:31 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (lst == NULL || new == NULL)
		return ;
	ptr = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	new->next = NULL;
	ptr->next = new;
}
// void print_list(t_list *lst)
// {
//     while (lst != NULL)
//     {
//         printf("%d -> ", *(int *)lst->content);
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }
// int main()
// {
//     t_list *head = NULL;
//     int a = 10;
//     int b = 20;
//     int c = 30;

//     // Create nodes
//     t_list *node1 = ft_lstnew(&a);
//     t_list *node2 = ft_lstnew(&b);
//     t_list *node3 = ft_lstnew(&c);
//     // Add nodes to the list
//     ft_lstadd_back(&head, node1);
//     ft_lstadd_back(&head, node2);
//     ft_lstadd_back(&head, node3);

//     // Print the list
//     print_list(head);

//     // Free memory
//     t_list *tmp;
//     while (head != NULL)
//     {
//         tmp = head;
//         head = head->next;
//         free(tmp);
//     }

//     return (0);
// }