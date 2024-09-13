/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:02:11 by lowatell          #+#    #+#             */
/*   Updated: 2024/09/10 00:24:41 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	t_list	*node;

	node = *lst;
	if (*lst && new)
	{
		while (node)
		{
			last = node;
			if (last->next == NULL)
			{
				last = new;
				node->next = last;
				return ;
			}
			node = node->next;
		}
	}
	else if (new)
		*lst = new;
	else
		return ;
}
