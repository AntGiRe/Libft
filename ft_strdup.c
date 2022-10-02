/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:33:36 by marvin            #+#    #+#             */
/*   Updated: 2022/10/01 17:40:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(char *s)
{
    int i;
    char *dest = (char*) malloc(sizeof(char) * (ft_strlen(s) + 1));

    i = 0;
    if (!dest)
        return(NULL);
    while (s[i] != '\0')
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}