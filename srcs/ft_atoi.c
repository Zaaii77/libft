/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 03:49:12 by lowatell          #+#    #+#             */
/*   Updated: 2024/10/16 12:34:09 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char *str)
{
	int	nbr;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((long)nbr != (((long)nbr * 2) / 2) && sign > 0)
			return (-1);
		if ((long)nbr != (((long)nbr * 2) / 2) && sign < 0)
			return (0);
		nbr = (nbr * 10) + str[i] - '0';
		i++;
	}
	return (nbr * sign);
}
