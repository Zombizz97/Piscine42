/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 23:39:34 by tribes            #+#    #+#             */
/*   Updated: 2022/08/25 22:30:36 by tribes           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_nb_str(char *str, char *charset)
{
	int		i;
	int		nb_str;

	i = 0;
	nb_str = 0;
	while (str[i])
	{
		if (ft_is_separator(str[i], charset))
			i++;
		else
		{
			nb_str++;
			while (!ft_is_separator(str[i], charset) && str[i] != '\0')
				i++;
		}
	}
	return (nb_str);
}

char	*ft_get_str(char *str, char *charset)
{
	int		i;
	int		len_str;
	char	*word;

	i = 0;
	len_str = 0;
	while (!ft_is_separator(str[len_str], charset) && str[len_str] != '\0')
		len_str++;
	word = malloc(sizeof(char) * (len_str + 1));
	if (word == 0)
		return (NULL);
	while (str[i])
	{
		if (!ft_is_separator(str[i], charset) && str[i] != '\0')
		{
			word[i] = str[i];
			i++;
		}
		else
		{
			break ;
		}
	}
	word[i] = '\0';
	return (word);
}

char	**ft_make_tab(char **tab, char *str, char *charset, int nb_str)
{
	int		j;
	int		i;

	i = 0;
	j = 0;
	if (str[0] == '\0')
	{
		tab[0] = NULL;
		return (tab);
	}
	while (str[j] && i < nb_str)
	{
		while (ft_is_separator(str[j], charset) && str[j])
			j++;
		if (!ft_is_separator(str[j], charset) && str[j])
		{
			tab[i] = ft_get_str(&str[j], charset);
			i++;
			while (!ft_is_separator(str[j], charset) && str[j])
				j++;
		}
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		nb_str;
	int		len;
	char	**tab;

	len = 0;
	while (str[len])
		len++;
	if (charset == '\0')
	{
		tab = malloc(sizeof(char) + 1);
		if (tab == 0)
			return (NULL);
		tab[0] = str;
		tab[1] = 0;
		return (tab);
	}
	len = 0;
	while (charset[len])
		len++;
	nb_str = ft_nb_str(str, charset);
	tab = malloc(sizeof(char *) * (nb_str + 1));
	if (tab == 0)
		return (NULL);
	return (ft_make_tab(tab, str, charset, nb_str));
}
