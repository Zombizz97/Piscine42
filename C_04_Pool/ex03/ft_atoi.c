/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:14:24 by tribes            #+#    #+#             */
/*   Updated: 2022/08/10 17:19:12 by tribes           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_white_space(char str)
{
	if (str == '\n' || str == '\v' || str == '\f'
		|| str == '\r' || str == ' ' || str == '\t')
		return (1);
	return (0);
}

int	ft_negative_positive(char str)
{
	if (str == '+' || str == '-' )
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	atoi;

	i = 0;
	neg = 1;
	atoi = 0;
	while (ft_white_space(str[i]) == 1)
		i++;
	while (ft_negative_positive(str[i]))
	{
		if (str[i] == '-')
			neg = neg * (-1);
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		atoi = atoi * 10 + (str[i] - 48);
		i++;
	}
	return (atoi * neg);
}
