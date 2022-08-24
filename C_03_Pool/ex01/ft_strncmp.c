/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:10:00 by tribes            #+#    #+#             */
/*   Updated: 2022/08/11 18:51:01 by tribes           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	ascii;

	i = 0;
	ascii = 0;
	while ((s1[i] || s2[i]) && (ascii == 0) && (i < n))
	{
		ascii = s1[i] - s2[i];
		i++;
	}
	return (ascii);
}
