#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int     main(void)
{
    char src[]="hoya mundo";
    char dest[]="hola mundo";
    printf("%d",ft_strncmp(src,dest, 4));
    
}
