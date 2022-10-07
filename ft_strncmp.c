/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:20:28 by marvin            #+#    #+#             */
/*   Updated: 2022/10/05 12:21:44 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && (unsigned long)i < n)
    {
        if(s1[i] != s2[i])
            return(s1[i] - s2[i]);
        i++;
    }
    return (0);
}