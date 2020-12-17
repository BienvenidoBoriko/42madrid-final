/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapa.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:08:04 by ijaber-a          #+#    #+#             */
/*   Updated: 2020/12/16 20:02:48 by ijaber-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MAPA
#define _MAPA

int		ft_file_size(char *file);
char	*ft_read_file(char *file);
int		ft_line_numbers(char *str);
int		ft_atoi(char *str);
char	ft_typecell(char *str, int n);
int		ft_ch_mapcell(char *str);
char	*ft_wr_map(char *str);
int 	*cal_cuadrada(char **cuad, char *caract, int num_filas);
int 	m_de_t(int pr, int seg, int ter);
char	*ft_strcpy(char *dest, char *src);
int 	**rell_cuad_aux(int lines, char *caract,char **arr);
int		rell_nums(int lines, char **arr, char * caract, int **tab);
int		ft_strlen(char *str);
char	**ft_buffer(char *buffer);
int		ft_strline(char *str);
char	**ft_fillmap(char **map, char *buffer, int lines);
char	**ft_map(char *file);
void	ft_print_sq(char **cuad, int *cart, char *caract, int lines);
char	*inc_pr_linia();
int		ver_linia(char **ln, char *pr_linia);
char	**inc_pr_tabla(int n_linias, char *pr_linia, int le_pr_lin);
char	**entr_standar();
void	ft_get_params(char *params);
int		check_map(char *map);
int		ft_col_num(char *buffer);
char	*ft_strcat(char *dest, char *src);
int		ft_ch_noprint(char *buffer);
void	ft_print_sq2(char **cuad, int lines);
char	*input_stdio(void);
int		inptut_len(char **input);
char	**entr_standar(void);
char	**inc_pr_tabla(int n_linias, char *pr_linia, int le_pr_lin);
int		reed_line(char **tab, int cont, int le_pr_lin);
int		verif_tabl(char **ln, char *pr_linia);
char	*inc_pr_linia(void);
int		ft_file_size_line(char *file);
char	*ft_read_file_line(char *file);
char	*ft_cells(char *str);

#endif
