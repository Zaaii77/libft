/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:42:37 by lowatell          #+#    #+#             */
/*   Updated: 2024/10/08 10:52:10 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + i);
	i--;
	while (i >= 0)
	{
		if ((char)c == s[i])
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
