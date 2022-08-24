/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 01:40:59 by tribes            #+#    #+#             */
/*   Updated: 2022/08/11 18:13:17 by tribes           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n > 16)
	{
		ft_print_hex(n / 16);
		ft_putchar(hex[n % 16]);
	}
	else
		ft_putchar(hex[n]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] => 0 && str[i] < 32) || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				write(1, "0", 1);
			ft_print_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
