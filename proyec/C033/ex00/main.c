#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);
int     main(void)
{
    char src[]="hola mundo";
    char dest[]="hola mun";

    printf("%d",ft_strcmp(src,dest));
    
}