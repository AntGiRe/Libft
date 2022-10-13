/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:03:24 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/10 21:03:24 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	int				i;
	unsigned int	len_s;

	len_s = ft_strlen(s);
	i = 0;
	if (start > len_s)
		len = 0;
	if (len > len_s - start)
		len = len_s - start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (start < ft_strlen(s) && s[start + i] != '\0'
		&& (unsigned long)i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len_s1;

	if (!s1 || !set)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	len_s1 = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[len_s1]) && len_s1 != 0)
		len_s1--;
	return (ft_substr((char *)s1, 0, len_s1 + 1));
}

int main(void)
{
	printf("%s", ft_strtrim("eeeeeee y hola que tal eeeeee", " "));
}