/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:33:46 by tribes            #+#    #+#             */
/*   Updated: 2022/08/23 13:45:59 by tribes           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_len_base(char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *str, char c)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	str[len + 1] = c;
	str[len + 2] = '\0';
	return (str);
}

int	ft_get_len(int nb, char *base)
{
	int	len;
	int	len_base;

	len_base = ft_len_base(base);
	len = 0;
	while (nb >= len_base)
	{
		len++;
		nb /= len_base;
	}
	return (len++);
}

char	*ft_nbr_base(int nbr, char *base, char *res, int *i)
{
	unsigned int	len_base;
	unsigned int	nb;
	int				digit;

	nb = nbr;
	len_base = ft_len_base(base);
	if (nbr < 0)
	{
		res[0] = '-';
		*i += 1;
		nb = -nbr;
	}
	if (nb >= len_base)
	{
		ft_nbr_base(nb / len_base, base, res, i);
		*i += 1;
		digit = nb % len_base;
		res[*i] = base[digit];
	}
	else
		res[*i] = base[nb];
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * 35);
	if (str == NULL)
		return (NULL);
	if (ft_len_base(base_from) == 0 || ft_len_base(base_to) == 0)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	str = ft_nbr_base(nb, base_to, str, &i);
	str[i + 1] = '\0';
	return (str);
}
