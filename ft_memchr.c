/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 03:03:54 by lowatell          #+#    #+#             */
/*   Updated: 2024/09/06 03:07:21 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < (int)n && ((unsigned char *)s)[i])
	{
		if ((unsigned char)c == ((unsigned char *)s)[i])
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
