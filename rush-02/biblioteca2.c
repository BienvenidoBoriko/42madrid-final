#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

// cuenta el numero de caracteres
// del fichero
int num_char(int fd)
{
    int num;
    char *ptr;

    num = 0;
    while (read(fd, &ptr, 1))
        num++;
    return (num);
}

// lee el fichero y guarda el contenido
// en un arreglo
char *reedFile(int fd, int max)
{
    char *ptr;
    int cont;

    cont = 0;
    ptr = (char *)malloc((max + 1) * sizeof(char *));
    while (read(fd, &ptr[cont], 1))
    {
        cont++;
    }
    ptr[cont] = '\0';
    return (ptr);
}

// abre el fichero y te devuelve eel manejador
int op_file(char *file)
{
     int fd;

    if ((fd = open("./numbers.dict.txt", O_RDONLY)) == -1)
    {
        write(1, "Error!", 5);
        return (0);
    }
    else
       return (fd);
}

char *biblioteca(char *file)
{
    int fd;
    char *arr_file;
    int max;

    fd = op_file(file);
    max = num_char(fd);
    close(fd);
    fd = op_file(file);
    arr_file = reedFile(fd,max);
    close(fd);
    return (arr_file);
}
int main(int argc, char **argv)
{
    char *bibl;
    int cont1;
    int cont2;

    bibl = biblioteca("./numbers.dict.txt");

    printf("%s", bibl);       
}