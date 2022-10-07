/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:25:37 by marvin            #+#    #+#             */
/*   Updated: 2022/10/05 12:26:03 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    int j;

    i = 0;
    while (big[i] != '\0' && (unsigned long)i < len)
    {
        j = 0;
        while (big[i + j] == little[j] || little[j] == '\0')
        {
            if(little[j] == '\0')
                return ((char *)&big[i]);
            j++;
        }
        i++;
    }
    return ((char *)big);
}