#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int num_char(int fd)
{
    int num;
    char *ptr;

    num = 0;
    while (read(fd, &ptr, 1))
        num++;
    return (num);
}

char *redFile(int fd, int max)
{
    char *ptr;
    int cont;

    cont = 0;
    ptr = (char *)malloc(max * sizeof(char *));
    while (read(fd, &ptr[cont], 1))
    {
        cont++;
    }
    return (ptr);
}

int num_lines(int max, char *arr_fil)
{
    int line;
   
   line = 0;
    while (*arr_fil)
    {
        if(*arr_fil == '\n')
        {
            line++;
        }
        arr_fil++;
    }
    return (line);
}

int f_l_num_car(char *arr_file, int line)
{
    int carac;
    int parar;

    carac = 0;
    parar = 0;
    if (line >= 0)
    {
        while (*arr_file != '\0')
        {
            if (*arr_file == '\n' && line > 0)
            {
                line--;
            }
            else if(*arr_file != '\n' && line == 0)
            {
                carac++;
            }
            else if (line == 0 && *arr_file == '\n')
               break;
            arr_file++;
        }
        return carac;
    }
    else
        return (-1);
}

int fil_lines(char *arr_file, int line, char **bibl, int cont)
{
    int n_cara;
    int n_char;
    int lin;
    int cont2;
    int n_carac;

    cont2 = 0;
    n_carac = f_l_num_car(arr_file, line);
    //while(!((arr_file[cont] >= 33) && (arr_file[cont] <= 126)))
     //   cont++;
    while (arr_file[cont] && cont2 < n_carac)
    {
        bibl[line][cont2] = arr_file[cont];
        cont++;
        cont2++;
    }
    cont--;
    return (cont);
}

char **res(int max, char *arr_file)
{
    char **bibl;
    int n_lin;
    int cont;
    int n_carac;

    n_lin = num_lines(max,arr_file);
    cont = 0;
    bibl = (char **)malloc(n_lin * sizeof(char**));
    while (cont < n_lin)
    {
        n_carac = f_l_num_car(arr_file, cont);
        bibl[cont] = (char *)malloc((n_carac + 1) * sizeof(char));
        cont++;
    }
    return (bibl);
}

char **file_to_array(int max, char *arr_file)
{
    char **bibl;
    int line;
    int n_lin;
    int cont2;
    int cont1;

    line = 0;
    cont2 = 0;
    cont1 = 0;
    n_lin = num_lines(max,arr_file);
    bibl = res(max, arr_file);
    while (cont1 < n_lin)
    {
        cont2 = fil_lines(arr_file, cont1, bibl, cont2);
        cont1++;
    }
    return (bibl);
}

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

char **biblioteca(char *file)
{
    int fd;
    char **bibl;
    char *arr_file;
    int max;

    fd = op_file(file);
    max = num_char(fd);
    close(fd);
    fd = op_file(file);
    arr_file = redFile(fd,max);
    close(fd);
    bibl = file_to_array(max, arr_file);
    return (bibl);
}
int main(int argc, char **argv)
{
    char **bibl;
    int cont1;
    int cont2;

    bibl = biblioteca("./numbers.dict.txt");
    for(int i = 0; i< 40 ; i++)
        printf("%s", bibl[i]); 
    free(bibl);
    //arr = file_to_array(fd);

    /*cont1 = 0;
    while(bibl[cont1])
    {
        cont2 = 0;
        while(bibl[cont1][cont2])
        {
            write(1, &bibl[cont1][cont2], 1);
            cont2++;
        }
        cont1++;
    }*/
        
}