/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:14:05 by tribes            #+#    #+#             */
/*   Updated: 2022/08/06 12:44:19 by tribes           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first_last_line(int j, int x)
{
	if (j == 1 || j == x)
	{
		ft_putchar('o');
		if (j == x)
			ft_putchar('\n');
	}
	else
		ft_putchar('-');
}

void	ft_between_line(int j, int x)
{
	if (j == 1 || j == x)
	{
		ft_putchar('|');
		if (j == x)
			ft_putchar('\n');
	}
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if (i == 1 || i == y)
			{
				ft_first_last_line(j, x);
			}
			else
			{
				ft_between_line(j, x);
			}
			j++;
		}
		i++;
	}
}
