/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadrini <dpadrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:56:45 by dpadrini          #+#    #+#             */
/*   Updated: 2022/02/18 12:42:15 by dpadrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_flag
{
	char	type;
	int		minu;
	int		zero;
	int		plus;
	int		hash;
	int		spce;
	int		poin;
	int		prec;
	int		widt;
	int		leng;
}	t_flag;

int		ft_printf(const char *str, ...);
int		check_flags(char *str, int i, t_flag *flags);
int		check_for_conversions(char *str, int i, t_flag *flag);
int		print_sc(char *str, int i, va_list args, t_flag *flag);
int		print_p(char *str, int i, va_list args, t_flag *flag);
int		print_id(char *str, int i, va_list args, t_flag *flags);
int		print_u(char *str, int i, va_list args, t_flag *flags);
int		print_x(char *str, int i, va_list args, t_flag *flags);
void	flags_at_zero(t_flag *flag, int io);
int		ft_strlen(const char *str);
int		check_n_print(char *str, size_t size, t_flag *flag);
int		look_for_flags(char *str, int i, t_flag *flag);
void	ft_putnbr_hex(char ch, long long int num, t_flag *flag);
int		ft_isdigit(int c);
int		len_num(long long n);
int		len_num_hex(unsigned long n);
int		ft_putnbr(long long int n, t_flag *flag);
void	putnbr_ptr(unsigned long num, char *base, t_flag *flag);
void	printchar(char c, t_flag *flag);
void	printstr(char *str, t_flag *flag);
void	print_stuff(int n, t_flag *flag, int io);
void	printsymbol(int num, int n, t_flag *flag);
void	print_hex(char *s, long long num, int n, t_flag *flag);

#endif