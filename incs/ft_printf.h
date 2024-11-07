/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:35:10 by lowatell          #+#    #+#             */
/*   Updated: 2024/11/07 17:19:58 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

# ifdef __linux__
#  define NULL_STR "(nil)"
#  define PTR_NULL "(nil)"
# else
#  define NULL_STR "(null)"
#  define PTR_NULL "0x0"
# endif

size_t		ft_putchar(int c);
size_t		ft_putstr(char *str);
size_t		ft_putnbase(ssize_t nbr, char *str);
size_t		ft_nbr_len(long nbr, char *str);
size_t		ft_print_address(void *ptr, char *str);
void		ft_putptr(size_t nbr, char *str);
int			ft_printf(const char *str, ...);

#endif
