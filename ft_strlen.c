/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:14:10 by agil-rey          #+#    #+#             */
/*   Updated: 2022/09/19 18:14:10 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strlen(char arg[])
{
    int counter;

    counter = 0;

    while (arg[counter] != '\0')
    {
        counter++;
    }

    return counter;
}