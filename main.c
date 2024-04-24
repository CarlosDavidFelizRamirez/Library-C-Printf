/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeliz-r <cfeliz-r@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 11:22:31 by cfeliz-r          #+#    #+#             */
/*   Updated: 2024/04/24 18:02:27 by cfeliz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int main() {
    ft_printf("Esta es una cadena: %s.\n", "Hola Mundo");
    ft_printf("Esta es una cadena nula: %s.\n", NULL);

    ft_printf("Esto es un entero: %d.\n", -42);
    ft_printf("Esto es otro entero: %i.\n", 2024);
    ft_printf("Esto es un cero: %d.\n", 0);

    ft_printf("Esto es un entero sin signo: %u.\n", 4294967295u);
    ft_printf("Esto es un cero sin signo: %u.\n", 0u);

    ft_printf("Esto es un hexadecimal en minúsculas: %x.\n", 0xdeadbeef);
    ft_printf("Esto es un hexadecimal en minúsculas con cero: %x.\n", 0);
    ft_printf("Esto es un hexadecimal en mayúsculas: %X.\n", 0xdeadbeef);
    ft_printf("Esto es un hexadecimal en mayúsculas con cero: %X.\n", 0);

    int a = 42;
    ft_printf("Esto es un puntero: %p.\n", &a);
    ft_printf("Esto es un puntero nulo: %p.\n", NULL);

    ft_printf("Esto es un caracter: %c.\n", 'A');
    ft_printf("Esto es un caracter nulo: %c.\n", '\0');

    ft_printf("Imprime un porcentaje: %%.\n");

    ft_printf("Hexadecimal con #: %#x.\n", 0x7f);
    ft_printf("Octal con #: %#o.\n", 075);

    return 0;
}

