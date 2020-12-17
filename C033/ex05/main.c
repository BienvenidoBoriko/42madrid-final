#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int     main(void)
{
    char dest[13]="primero";
    char segundo[]="segundo";

   // printf("%lu",strlcat(dest,primero,6));
   // printf("\n");
   // printf("%lu",strlcat(dest,segundo,15));
    printf("%d",ft_strlcat(dest,segundo,15));
    printf("%s", dest);
    //printf("\n");
     //printf("%lu",strlcat(dest,tercero, 1));
    
}
