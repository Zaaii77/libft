/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 22:41:10 by lowatell          #+#    #+#             */
/*   Updated: 2024/09/07 03:58:03 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_free_tab(char **str, int len)
{
	int	i;

	i = 0;
	while (i <= len)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

int	ft_countword(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	*ft_dostr(char *s, char c, char **strs, int len)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (s[j] != c && s[j])
		j++;
	str = (char *)malloc(sizeof(char) * j + 1);
	if (!str)
		return (ft_free_tab(strs, len));
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	strs = (char **)malloc(sizeof(char *) * (ft_countword((char *)s, c) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		if (s[j])
		{
			strs[i] = ft_dostr((char *)s + j, c, strs, i);
			i++;
		}
		while (s[j] != c && s[j])
			j++;
	}
	strs[i] = 0;
	return (strs);
}
