/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 17:39:50 by bboriko-          #+#    #+#             */
/*   Updated: 2020/11/29 17:39:56 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_combn(int n);

void ft_putnbr(int numero)
{
    char array_numero[323];
    int contador;
    char caracter;
    int numero_dado;

    numero_dado = numero;
    contador = 0;
    while (numero > 9 || (numero != 0 && numero < -9))
    {
        array_numero[contador] = numero % 10;
        numero = numero / 10;
        contador++;
    }
    array_numero[contador] = numero;
    if (numero_dado < 0)
        write(1, "-", 1);
    while (contador >= 0)
    {
        if (numero_dado < 0)
            caracter = (array_numero[contador] * -1) + '0';
        else
            caracter = array_numero[contador] + '0';
        write(1, &caracter, 1);
        contador--;
    }
}

void auxiliar(int *numeros, int size)
{
    int n;
    int imprimir;
    int numero;
    int siguiente;

    n = 0;
    while (n <= size - 1)
    {
        while ((numeros[n] / 10) > 9 && imprimir != 0)
        {
            numero = numeros[n] % 10;
            numeros[n] = numeros[n] / 10;
            siguiente = numeros[n + 1] % 10;
            numeros[n + 1] = numeros[n + 1] / 10;
            if (numero > siguiente)
            {
                imprimir = 0;
            }
        }
        if (imprimir != 0)
        {
            ft_putnbr(numeros[n]);
            write(1, ", ", 1);
        }
        n++;
    }
}

void ft_print_combn(int n)
{
    int y;
    int numeros[990];
    int min;
    int max;

    if (n > 0 && n < 10)
    {
        y = 0;
        if (n > 1)
        {
            while (y <= 9.9 * (10 * (n - 1)))
            {
                numeros[y] = y;
                y++;
            }
            auxiliar(numeros, y);
        }
        else
        {
            while (y <= 9)
            {
                numeros[y] = y;
                y++;
            }
            auxiliar(numeros, y);
        }
    }
}

int main(void)
{
    ft_print_combn(6);
}
