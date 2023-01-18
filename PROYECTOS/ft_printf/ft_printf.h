/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:32:55 by dlopez-i          #+#    #+#             */
/*   Updated: 2023/01/18 16:25:47 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdio.h>
# include<stdarg.h>

//Funciones para imprimir %c %s
int	ft_type_char(char c, int count);
int	ft_type_str(char *str, int count);

//Funciones para imprimir %u %x %X
int	ft_print_id(int num, int count);
int	ft_p_num(unsigned int num, int count, int opt, unsigned int bas);

//Funciones para imprimir %p
int	ft_p_ptr(void *ptr, int count);

//Funcion para elegir la clase
int	ft_class(va_list arg, const char c, int count);

//Funcion para verificar el str y la posicion del placeholder
int	ft_check_str(va_list arg, const char *str, int count);

//Funcion principal
int	ft_printf(const char *str, ...);
#endif
