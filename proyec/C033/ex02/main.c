#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int     main(void)
{
    char dest[80]="primero";
    char primero[]="primero";
    char segundo[]="segundo";
    char tercero[]="tercero";

    printf("%s",ft_strcat(dest,primero));
    printf("\n");
    printf("%s",ft_strcat(dest,segundo));
    printf("\n");
     printf("%s",ft_strcat(dest,tercero));
    
}
