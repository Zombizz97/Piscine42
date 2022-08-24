/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:25:03 by tribes            #+#    #+#             */
/*   Updated: 2022/08/24 21:23:42 by tribes           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

int	ft_arglen(char **strs, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size && *strs[i])
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	len;
	char	*str;

	i = 0;
	if (size == 0)
	{
		str = malloc(sizeof(char));
		str = 0;
		return (NULL);
	}
	len = ft_arglen(strs, size);
	str = malloc(sizeof(char) * (len + ((size - 1) * ft_strlen(sep)) + 1));
	if (!str)
		return (NULL);
	*str = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i != size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	str[ft_strlen(str)] = '\0';
	return (str);
}
