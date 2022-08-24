/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 11:50:05 by tribes            #+#    #+#             */
/*   Updated: 2022/08/11 13:08:50 by tribes           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	i;
	unsigned int	len_src;

	i = 0;
	len_dest = 0;
	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	while (dest[len_dest] != '\0' && len_dest < size)
		len_dest++;
	if (len_dest > size || size == 0)
		return (size + len_src);
	while (src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	if (len_dest < size)
		dest[len_dest + i] = '\0';
	return (len_dest + i);
}
