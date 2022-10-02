/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:38:57 by marvin            #+#    #+#             */
/*   Updated: 2022/10/02 20:21:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    int i;
    char *str = s;

    i = 0;
    while (i < n && str[i] != '\0')
    {
        if(c == str[i])
            return (&str[i]);
        i++;
    }
    return (NULL);
}