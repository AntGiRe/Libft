/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:36:37 by agil-rey          #+#    #+#             */
/*   Updated: 2022/09/27 13:30:40 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcpy(char *dst, char *src, size_t size)
{
	while (size > 0 && *dst != '\0')
	{
		*dst++ = *src++;
		size--;
	}
	return (ft_strlen(src));
}