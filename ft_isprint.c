/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:01:40 by agil-rey          #+#    #+#             */
/*   Updated: 2022/09/19 18:01:40 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_isprint(int arg)
{
    if(arg != 127 && arg >= 32)
    {
        return (1);
    }
    return (0);
}