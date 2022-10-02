/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:25:37 by marvin            #+#    #+#             */
/*   Updated: 2022/10/02 20:22:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    int j;

    i = 0;
    while (big[i] != '\0')
    {
        j = 0;
        while (big[i + j] == little[j] || little[j] == '\0')
        {
            if(little[j] == '\0')
                return (&big[i]);
            j++;
        }
        i++;
    }
    return (big);
}