/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:42:37 by lowatell          #+#    #+#             */
/*   Updated: 2024/09/04 18:57:07 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (0);
	while (s[i])
		i++;
	if (c == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if ((char)c == s[i])
			return ((char *)s + i);
		i--;
	}
	return (0);
}
