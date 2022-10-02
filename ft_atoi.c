/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:39:43 by marvin            #+#    #+#             */
/*   Updated: 2022/10/02 19:46:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    int sign;
    long value;

    sign = 1;
    value = 0;
    while (*nptr == ' ' || *nptr == '\n' || *nptr == '\t'
        || *nptr == '\f' || *nptr == '\r' || *nptr == '\v')
        nptr++;
    if (*nptr == '-')
        sign *= -1;
    if (*nptr == '-' || *nptr == '+')
        nptr++;
    while (*nptr >= '0' && *nptr <= '9')
    {
        value = value * 10 + (*nptr - '0');
        nptr++;
    }
    if (sign > 0)
        return (value);
    else
        return (-value);
}