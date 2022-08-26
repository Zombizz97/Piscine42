/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:25:23 by tribes            #+#    #+#             */
/*   Updated: 2022/08/22 17:33:47 by tribes           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_space_negative_index(char c, char *base, int test)
{
	int	i;

	if (test == 1)
	{
		if ((c >= 9 && c <= 13) || c == 32)
			return (1);
		return (0);
	}
	if (test == 2)
	{
		if (c == '-' || c == '+')
			return (1);
		return (0);
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_len_base(char *base)
{
	int	len_base;
	int	i;
	int	j;

	len_base = 0;
	while (base[len_base])
		len_base++;
	if (len_base < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (len_base);
}

int	ft_end(char *str, char *base, int i)
{
	int	j;
	int	b;

	b = 0;
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[j] == str[i])
			{
				b = 0;
				break ;
			}
			else
				b = 1;
			j++;
		}
		if (b == 1)
			break ;
		i++;
	}
	return (i);
}

int	ft_base(char *str, char *base, int len_base, int i)
{
	int	power;
	int	atoi;
	int	j;

	j = ft_end(str, base, i);
	atoi = 0;
	power = 1;
	while (j >= i)
	{
		if (ft_space_negative_index(str[j], base, 3) != -1)
		{
			atoi += power * ft_space_negative_index(str[j], base, 3);
			power *= len_base;
		}
		j--;
	}
	return (atoi);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	neg;
	int	len_base;

	i = 0;
	neg = 1;
	len_base = ft_len_base(base);
	if (len_base == 0)
		return (0);
	while (ft_space_negative_index(str[i], base, 1) == 1)
		i++;
	while (ft_space_negative_index(str[i], base, 2))
	{
		if (str[i] == '-')
			neg = neg * (-1);
		i++;
	}
	return (ft_base(str, base, len_base, i) * neg);
}
