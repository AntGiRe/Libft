/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:36:37 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/05 14:02:21 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (size > 1)
	{
		while (size > 0 && *dst != '\0')
		{
			*dst++ = *src++;
			size--;
		}
		*dst = '\0';
	}
	return (ft_strlen(src));
}