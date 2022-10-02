/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:02:06 by marvin            #+#    #+#             */
/*   Updated: 2022/10/02 12:07:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    int i;

    i = 0;

    while ( i < n)
    {
        if((unsigned char*)str1 + i != (unsigned char*)str2 + i)
            return(((unsigned char*)str1 + i) - ((unsigned char*)str2 + i));
        i++;
    }
}