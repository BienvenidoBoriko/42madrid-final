#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

typedef enum
{
	FALSE,
	TRUE
}	t_bool;

# define EVEN_MSG "the number is even\n"
# define ODD_MSG "the number is odd\n"
# define SUCCESS 1
# define EVEN(x) (x % 2 == 0)

t_bool	ft_is_even(int nbr);
void	ft_putstr(char *str);

#endif

