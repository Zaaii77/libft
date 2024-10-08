/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:09:44 by lowatell          #+#    #+#             */
/*   Updated: 2024/10/08 10:51:05 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;
	void	*new_content;

	if (!lst || !f)
		return (NULL);
	list = NULL;
	while (lst)
	{
		if (lst->content)
			new_content = f(lst->content);
		if (new_content)
			node = ft_lstnew(new_content);
		if (node == NULL || new_content == NULL)
		{
			del(new_content);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}
