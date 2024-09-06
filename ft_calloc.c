/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 04:07:35 by lowatell          #+#    #+#             */
/*   Updated: 2024/09/06 04:13:02 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	i;

	i = 0;
	result = (void *)malloc(count * size + 1);
	if (!result)
		return (NULL);
	while (i < size)
	{
		((unsigned char *)result)[i] = '\0';
		i++;
	}
	return (result);
}
