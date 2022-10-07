/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:32:40 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/05 12:17:09 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char* index = 0;
	char* st;

	st = (char *)str;
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