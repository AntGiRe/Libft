/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:01:40 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/02 20:14:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_isprint(int c)
{
    if(c != 127 && c >= 32)
    {
        return (1);
    }
    return (0);
}