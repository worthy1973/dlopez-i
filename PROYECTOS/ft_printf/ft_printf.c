/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:06:30 by dlopez-i          #+#    #+#             */
/*   Updated: 2023/01/18 16:25:08 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_class(va_list arg, const char c, int count)
{
	if (c == '%')
		count = ft_type_char('%', count);
	if (c == 'c')
		count = ft_type_char(va_arg(arg, int), count);
	if (c == 's')
		count = ft_type_str(va_arg(arg, char *), count);
	if (c == 'i' || c == 'd')
		count = ft_print_id(va_arg(arg, int), count);
	if (c == 'u')
		count = ft_p_num(va_arg(arg, unsigned int), count, 1, 10);
	if (c == 'x')
		count = ft_p_num(va_arg(arg, unsigned int), count, 2, 16);
	if (c == 'X')
		count = ft_p_num(va_arg(arg, unsigned int), count, 3, 16);
	if (c == 'p')
		count = ft_p_ptr(va_arg(arg, void *), count);
	return (count);
}

int	ft_check_str(va_list arg, const char *str, int count)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			count = ft_class(arg, str[i + 1], count);
			if (count == -1)
				return (-1);
			i++;
		}
		else
		{
			count = ft_type_char(str[i], count);
			if (count == -1)
				return (-1);
		}
		i++;
	}	
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int			count;
	va_list		arg;

	count = 0;
	va_start (arg, str);
	count = ft_check_str(arg, str, count);
	va_end(arg);
	return (count);
}
