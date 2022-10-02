/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:47:37 by marvin            #+#    #+#             */
/*   Updated: 2022/10/02 20:20:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcat(char *dst, const char *src, size_t size)
{
    int i;
    int j;

    i = ft_strlen(dst);
    j = 0;
    if (size == 0)
        return (ft_strlen(src));
    while(src[j] != '\0' && i + 1 < size)
    {
        dst[i] = src[j];
        j++;
        i++;
    }
    dst[i] = '\0';
    if (size < ft_strlen(dst))
        return (ft_strlen(src) + size);
    else
        return (ft_strlen(dst) + ft_strlen(src));
}