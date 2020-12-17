#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);


int     main(void)
{
    char dest[80]="primero";
    char primero[]="primero";
    char segundo[]="segundo";
    char tercero[]="tercero";

    printf("%s",strncat(dest,primero,6));
    printf("\n");
    printf("%s",strncat(dest,segundo,5));
    printf("\n");
    printf("%s",strncat(dest,tercero, 1));
    
}
