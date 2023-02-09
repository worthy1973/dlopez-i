/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:07:47 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/07/25 17:01:16 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)

{
	int	count;
	int	second_place;
	int	temp;

	count = 0;
	while (count < size)
	{
		second_place = count + 1;
		while (second_place < size)
		{
			if (tab[count] > tab[second_place])
			{
				temp = tab[second_place];
				tab[second_place] = tab[count];
				tab[count] = temp;
			}
			second_place++;
		}
		{
		count++;
		}
	}
}
