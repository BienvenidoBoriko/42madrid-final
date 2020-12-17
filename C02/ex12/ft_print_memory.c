/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 21:34:27 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/02 21:34:30 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_print_memory(void *addr, unsigned int size);

void separar_num(long num,int *array_numero, int size)
{
    int contador;

    if(num < 0)
        num = num * -1;
    contador = 0;
    while (num > 0 && contador < size)
    {
        num = array_numero[contador] = num / 16;
        contador++;
    }
}

void conver_hexa(long numero, int *hexa)
{
    int contador;

    contador=0;
    while (numero > 0 && contador < 16)
    {
        hexa[contador] = numero % 16;
        numero = numero / 16;
        contador++;
    }
}

void imprimir_hexa(int numero)
{
     char c_decimal;
    char caracteres[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    if (numero >= 10 && numero < 16)
    {
        c_decimal = (caracteres[numero - 10]);
        write(1, "0", 2);
        write(1, &c_decimal, 1);
    }
    else
    {
        c_decimal = (numero / 16) + '0';
        write(1, &c_decimal, 1);
        if (numero > 10)
            c_decimal = caracteres[numero % 16];
        else
            c_decimal = (numero % 16) + '0';
        write(1, &c_decimal, 1);
    }
}

void ft_print_memory(void *addr, unsigned int size)
{
    void *ref;
    int decimal;
    // char d_p_caracter[] = &addr;
    char c_decimal;
    char c_decimal2;
    int *array_numero;
    int contador;
    int hexa[15];
    char point[]=&addr;
    char caracteres[] = {'a', 'b', 'c', 'd', 'e', 'f'};

    ref = addr;
    printf("%p", &addr);
    //printf("\n");
    //printf("%ld", (long)&addr);
    //conver_hexa(hexa, (long)&addr);
    contador = 0;
    conver_hexa((long)&addr, hexa);

    while (contador <= 15)
    {
        imprimir_hexa(hexa[contador]);
        printf("%d",hexa[contador]);
        contador++;
    }
    /*printf("%s", hexa[0]);
    printf("%s", hexa[1]);
    //printf("%s", hexa[4]);

    //printf("%s", );
    return ref;
    while (*addr != '\0')
	{
      if(*str >= 0 && *str <= 31)
       {
           contador = 0;
           while(contador <= 31)
           {
               if(*str == contador)
                   decimal = contador;
                contador++;
           }
           if(decimal < 10){
               c_decimal = decimal + '0';
               write(1, "\\", 1);
               write(1, &c_decimal, 1);
           }
           else if(decimal >= 10 && decimal < 16)
           {
               c_decimal = (caracteres[decimal - 10]);
               write(1, "\\", 1);
               write(1, "0", 1);
               write(1, &c_decimal, 1);
           }
           else
           {
               write(1, "\\", 1);
               c_decimal2 = (decimal / 10) + '0';
               write(1, &c_decimal2, 1); 
               c_decimal = caracteres[decimal % 10];
               write(1, &c_decimal, 1);
           }
           
       }
       else
       {
           write(1, str, 1);
       }
       
       str++;
	}*/
}

int main(void)
{
    char cadena[] = "Coucou\ntu\t vas\r bien ?";
    ft_print_memory(cadena, 1);
}
