/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_idu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:21:20 by dlopez-i          #+#    #+#             */
/*   Updated: 2023/01/18 16:33:38 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_print_id(int num, int count)
{
	if (num == -2147483648)
	{
		count = ft_type_str("-2147483648", count);
		if (count == -1)
			return (-1);
	}
	else
	{
		if (num < 0)
		{
			count = ft_type_char('-', count);
			if (count == -1)
				return (-1);
			num = -num;
		}
		count = ft_p_num(num, count, 1, 10);
		if (count == -1)
			return (-1);
	}
	return (count);
}

int	ft_p_num(unsigned int num, int count, int opt, unsigned int bas)
{
	char	*base;

	if (opt == 1)
		base = "0123456789";
	if (opt == 2)
		base = "0123456789abcdef";
	if (opt == 3)
		base = "0123456789ABCDEF";
	if (num >= bas)
	{
		count = ft_p_num(num / bas, count, opt, bas);
		if (count == -1)
			return (-1);
	}
	count = ft_type_char(base[num % bas], count);
	if (count == -1)
		return (-1);
	return (count);
}

int	ft_p_pt(unsigned long int num, int count, int opt, unsigned int bas)
{
	char	*base;

	if (opt == 1)
		base = "0123456789";
	if (opt == 2)
		base = "0123456789abcdef";
	if (opt == 3)
		base = "0123456789ABCDEF";
	if (num >= bas)
	{
		count = ft_p_pt(num / bas, count, opt, bas);
		if (count == -1)
			return (-1);
	}
	count = ft_type_char(base[num % bas], count);
	if (count == -1)
		return (-1);
	return (count);
}

int	ft_p_ptr(void *ptr, int count)
{
	count = ft_type_str("0x", count);
	if (count == -1)
		return (-1);
	count = ft_p_pt((unsigned long int)ptr, count, 2, 16);
	if (count == -1)
		return (-1);
	return (count);
}
