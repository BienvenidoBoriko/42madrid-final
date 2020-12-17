/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapa.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:08:04 by ijaber-a          #+#    #+#             */
/*   Updated: 2020/12/15 12:42:55 by ijaber-a         ###   ########.fr       */
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
int cal_cuadra(int lines, int **tab, int line_len);
int m_de_t(int pr, int seg, int ter);
char	*ft_strcpy(char *dest, char *src);
int **rell_cuad_aux(int lines, char *caract,char **arr);
int rell_nums(int lines, int line_len, char **arr, char * caract, int **tab);
int		ft_strlen(char *str);
char	**ft_buffer(char *buffer);
int		ft_strline(char *str);
char	**ft_fillmap(char **map, char *buffer, int lines);

#endif
