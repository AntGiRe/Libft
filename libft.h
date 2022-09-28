/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:53:50 by agil-rey          #+#    #+#             */
/*   Updated: 2022/09/27 13:31:43 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     ft_isalpha(int c);
int     ft_isalnum(int c);
void *ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
int     ft_isascii(int arg);
int     ft_isdigit(int arg);
int     ft_isprint(int arg);
void	*ft_memcpy(void *str1, void *str2, size_t n);
void	*ft_memmove(void *str1, void *str2, size_t n);
char    *ft_strchr(char *s, int c);
unsigned long	ft_strlcpy(char *dst, char *src, size_t size);
int     ft_strlen(char arg[]);
char	*ft_strrchr(char *str, int c);
int ft_tolower(int c);
int ft_toupper(int c);