/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:19:09 by marvin            #+#    #+#             */
/*   Updated: 2022/09/28 13:33:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;
    if (nmemb == 0 || size == 0)
        return NULL;

    ptr = malloc(nmemb * size);

    ft_bzero(ptr, nmemb * size);
    return (ptr);
}