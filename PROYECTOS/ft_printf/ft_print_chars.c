/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:47:10 by dlopez-i          #+#    #+#             */
/*   Updated: 2023/01/17 15:17:30 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_type_char(char c, int count)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	count++;
	return (count);
}

int	ft_type_str(char *str, int count)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i] != '\0')
	{
		count = ft_type_char(str[i], count);
		if (count == -1)
			return (-1);
		i++;
	}
	return (count);
}
