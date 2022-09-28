/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:17:08 by agil-rey          #+#    #+#             */
/*   Updated: 2022/09/27 13:29:42 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, void *str2, size_t n)
{
	char* dest;
	char* src;

	if(!str2)
		return (0);
	dest = str1;
	src = str2;
	while (n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	return (str1);
}