/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeliz-r <cfeliz-r@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 11:22:31 by cfeliz-r          #+#    #+#             */
/*   Updated: 2024/04/15 13:00:44 by cfeliz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main() {
    ft_printf("Esta es una cadena: %s.\n", "Hola Mundo");
    
    ft_printf("Esto es un entero: %d.\n", -42);
    ft_printf("Esto es otro entero: %i.\n", 2024);
    
    ft_printf("Esto es un entero sin signo: %u.\n", 4294967295u);
    
    ft_printf("Esto es un hexadecimal en minúsculas: %x.\n", 0xdeadbeef);
    ft_printf("Esto es un hexadecimal en mayúsculas: %X.\n", 0xdeadbeef);
    
    int a = 42;
    ft_printf("Esto es un puntero: %p.\n", &a);
    
    ft_printf("Esto es un caracter: %c.\n", 'A');
    
    ft_printf("Imprime un porcentaje: %%.\n");
    
    return 0;
}

