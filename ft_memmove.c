/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:36:32 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/02 20:17:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char* dest;
	char* src;

	if(!str2)
		return (0);

	if (str1 > str2)
	{
		dest = str1 + n - 1;
		src = str2 + n - 1;
		while (n > 0)
		{
			*dest-- = *src--;
			n--;
		}
	}
	else
	{
		dest = str1;
		src = str2;
		while (n > 0)
		{
			*dest++ = *src++;
			n--;
		}
	}
	return (str1);
}