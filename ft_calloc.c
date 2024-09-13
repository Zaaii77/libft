/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 04:07:35 by lowatell          #+#    #+#             */
/*   Updated: 2024/09/10 01:22:42 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	i;

	i = 0;
	result = (void *)malloc(count * size);
	if (!result)
		return (NULL);
	while (i < (count * size))
	{
		((char *)result)[i] = '\0';
		i++;
	}
	return (result);
}
