/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:32:40 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/02 20:20:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char* index = 0;
	char* st;

	st = str;
	while (*st != '\0')
	{
		if (*st == c)
		{
			index = st;
		}
		st++;
	}
	return (index);
}