/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:28:48 by lowatell          #+#    #+#             */
/*   Updated: 2024/09/04 18:41:40 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <strings.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", strncmp(av[1], av[2], 1));
	printf("%d\n", ft_strncmp(av[1], av[2], 1));
}
