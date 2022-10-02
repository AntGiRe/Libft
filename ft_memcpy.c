/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:17:08 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/02 20:16:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
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