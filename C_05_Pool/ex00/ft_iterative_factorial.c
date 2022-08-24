/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:36:20 by tribes            #+#    #+#             */
/*   Updated: 2022/08/12 12:05:52 by tribes           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	total;

	i = 1;
	total = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		total = total * i;
		i++;
	}
	return (total);
}
