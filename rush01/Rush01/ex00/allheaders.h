
#ifndef HEADER_H
#define HEADER_H

int		ft_verify(int counts, char *values);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_continue_verify_numbers(char *values);
int		ft_verify_numbers(char *values, int i);
int		ft_continue_verify(char *values,int i);
void	ft_logic_start(char *values);
void	populate_matrix_up(char *values, int ***matrix);
void	populate_matrix_do(char *values, int ***matrix);
void	populate_matrix_le(char *values, int ***matrix);
void	populate_matrix_ri(char *values, int ***matrix);

#endif
