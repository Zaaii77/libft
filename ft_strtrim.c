/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:37:20 by lowatell          #+#    #+#             */
/*   Updated: 2024/09/11 02:10:26 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_start_end(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (s1[i])
		i++;
	while (set[j])
	{
		if (set[j] == s1[0])
		{
			count++;
			j++;
		}
		if (set[j] == s1[i - 1])
		{
			count++;
			j++;
		}
		j++;
	}
	return (count);
}

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
	count = ft_check_start_end(s1, set);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) - count) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		if (!ft_char_in_set(s1[i], set) && (i == 0 || i == (ft_strlen(s1) - 1)))
			str[i] = s1[i];
		else
			str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
