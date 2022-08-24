/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:44:55 by tribes            #+#    #+#             */
/*   Updated: 2022/08/11 18:14:56 by tribes           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (dest[] == '\0' || src[] == '\0')
		return (0);
	while (src[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < size)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
		i++;
	return (i);
}

int main()
{
	char dest[] = "abcdefgh";
	char src[] = "abcdefghijklmnopqrstuvwxyz";

	ft_strlcpy()
}
