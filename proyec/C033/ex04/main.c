#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
    char dest[80] = "primero hol ho hhola holll";
    char primero[] = "hola";
    char *ref;

   	printf("%s", ft_strstr(dest, primero));

    printf("%s", strstr(dest, primero));
    printf("\n");
    //printf("%s", ft_strstr(dest, segundo));
    //printf("\n");
    //printf("%s", ft_strstr(dest, tercero));
}
