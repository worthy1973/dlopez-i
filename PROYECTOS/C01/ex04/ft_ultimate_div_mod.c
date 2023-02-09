/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:38:01 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/07/20 14:47:22 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)

{	
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
int main(void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;
	
	c = 35;
	d = 12;
	a = &c;
	b = &d;
	printf("%d entre %d =\n", c, d);
	ft_ultimate_div_mod(a, b);
	printf("Respuesta es %d\n", c);
	printf("Resto es %d\n", d);
	return (0);
}
*/
