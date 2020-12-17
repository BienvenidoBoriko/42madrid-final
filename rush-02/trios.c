#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char **argv)
{
	int i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		i++;
	}
	return (i);
}

void ft_array_rev(char **argv)
{
	int i;
	int r;
	char **tab;
	int k;

	tab = malloc(sizeof(char *) * ft_strlen(argv) / 3);
	i = 0;
	k = 0;
	while (i < ((ft_strlen(argv) / 3) + 1))
	{
		tab[i] = malloc(sizeof(char *) * 3);
		r = 0;
		if (ft_strlen(argv) % 3 == 1 && i == 0)
		{
			tab[i][r] = '0';
			tab[i][r + 1] = '0';
			tab[i][r + 2] = argv[1][k];
			write(1, tab[i], 3);
			write(1, " ", 1);
			i++;
			k++;
		}
		if (ft_strlen(argv) % 3 == 2 && i == 0)
		{
			tab[i][r] = '0';
			tab[i][r + 1] = argv[1][k];
			tab[i][r + 2] = argv[1][k + 1];
			write(1, tab[i], 3);
			write(1, " ", 1);
			i++;
			k = k + 2;
		}
		while (r < 3 && k < ft_strlen(argv))
		{
			tab[i] = malloc(sizeof(char *) * 3);
			tab[i][r] = argv[1][k];
			write(1, &tab[i][r], 1);
			r++;
			k = k + 1;
		}
		write(1, " ", 1);
		i++;
	}
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void write_string(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{

	if (argc == 2)
	{
		argc = 1;
		ft_array_rev(argv);
	}
	else if (argc < 2)
	{
		write_string("At least one argument is needed");
	}
	else if (argc > 3)
	{
		write_string("At most two arguments are allowed");
	}
	else
	{
		ft_array_rev(argv);
	}

	return (0);
}
