/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:28:50 by marvin            #+#    #+#             */
/*   Updated: 2022/09/27 11:49:09 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strchr(char *s, int c)
{
    while (*s != '\0')
    {
        if(*s == c)
            return (s);
        s++;
    }
    return (0);
}