/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:37:20 by lowatell          #+#    #+#             */
/*   Updated: 2024/09/06 15:13:17 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_char_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	i;
	char	*str;

	if (!s1)
		return (NULL);
	i = -1;
	count = 0;
	while (s1[++i])
		if (ft_char_in_set(s1[i], set))
			count++;
	str = (char *)malloc(sizeof(char) * (i - count) + 1);
	if (!str)
		return (NULL);
	i = 0;
	count = 0;
	while (s1[i])
	{
		if (!ft_char_in_set(s1[i], set))
			str[count++] = s1[i];
		i++;
	}
	str[count] = '\0';
	return (str);
}
