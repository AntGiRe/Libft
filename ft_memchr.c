/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:38:57 by marvin            #+#    #+#             */
/*   Updated: 2022/10/05 12:24:29 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    int i;
    char *str = (char *)s;

    i = 0;
    while ((unsigned long)i < n && str[i] != '\0')
    {
        if(c == str[i])
            return (&str[i]);
        i++;
    }
    return (NULL);
}