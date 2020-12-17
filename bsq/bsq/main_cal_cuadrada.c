#include "mapa.h"

int main(void)
{
    char **cuad;
    int cont;
    int cont2;
    int cont1;
    cont = 0;
    int **tab;
    int *coord;
    char *caract = ".ox";
    int filas = 9;
    cuad = (char**)malloc(9 * sizeof(char**));
    while (cont < 9)
    {
        cuad[cont] = (char*)malloc(27 * sizeof(char));
        cont++;
    }
    ft_strcpy(cuad[0], "..o.........o......o.....o.");
    ft_strcpy(cuad[1], "............o......o.....o.");
    ft_strcpy(cuad[2], "....o.......o......o.....o.");
    ft_strcpy(cuad[3], "............o......o.....o.");
    ft_strcpy(cuad[4], "............o......o.....o.");
    ft_strcpy(cuad[5], "......o............o.....o.");
    ft_strcpy(cuad[6], "............o...o..o.....o.");
    ft_strcpy(cuad[7], "............o......o.....o.");
    ft_strcpy(cuad[8], "...o........o......o.....o.");

    coord = cal_cuadrada(cuad, caract, 9);

    printf("%d\n", coord[0]);
    printf("%d\n", coord[1]);
    printf("%d\n", coord[2]);
}