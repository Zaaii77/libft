/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:40:50 by lowatell          #+#    #+#             */
/*   Updated: 2024/09/11 01:21:26 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*obj;
	t_list	*new;

	if (!(*f) || !(*del) || !lst)
		return (NULL);
	while (lst)
	{
		obj = f(lst->content);
		if (!obj)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, obj);
		lst = lst->next;
	}
	return (new);
}
