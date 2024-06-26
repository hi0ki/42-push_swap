/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:00:09 by eel-ansa          #+#    #+#             */
/*   Updated: 2024/04/18 13:00:12 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*ft_substr(char const *s, int start, int len)
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		len = 0;
	else if (ft_strlen(s) <= (start + len))
		len = (ft_strlen(s) - start);
	str = malloc(len * (sizeof(char)) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	c_word(char const *s, char c)
{
	int	i;
	int	cnt;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			cnt++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cnt);
}

char	**ft_free(char **str, int i)
{
	if (i == -1)
	{
		i = 0;
		while (str[i])
			i++;
	}
	while (i > 0)
	{
		i--;
		free(str[i]);
	}
	free(str);
	return (NULL);
}

static char	**ft_alloc(char *s, char c, int c_word, char **str)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	start = 0;
	end = 0;
	while (i < c_word)
	{
		while (s[start] == c && s[start])
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		str[i] = ft_substr(s, start, end - start);
		if (!str[i])
			return (ft_free(str, i));
		start = end;
		i++;
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		len_w;

	if (ft_strlen(s) == 0)
		puterror("Error\n");
	len_w = c_word(s, c);
	if (len_w == 0)
		puterror("Error\n");
	str = (char **)malloc(sizeof(char *) * (len_w + 1));
	if (!str)
		return (NULL);
	str = ft_alloc((char *)s, c, len_w, str);
	return (str);
}
