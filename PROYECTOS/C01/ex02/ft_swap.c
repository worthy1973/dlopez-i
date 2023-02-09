/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:47:29 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/07/18 14:42:22 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	a;
	int	b;
	
	a = 25;
	b = 35;
	printf("%d\n", a);
	printf("%d\n", b);
	ft_swap(&a , &b);
	printf("%d\n", a);
	printf("%d\n", b);
	
	return(0);
}
*/
