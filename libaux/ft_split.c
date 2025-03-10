/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:02:25 by nmagro-r          #+#    #+#             */
/*   Updated: 2024/10/10 18:08:05 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*copy_words(const char *s, int *i, char c)
{
	char	*words;
	int		fin;

	while (s[*i] == c)
		(*i)++;
	fin = *i;
	while (s[fin] != '\0' && s[fin] != c)
		fin++;
	words = ft_substr(s, *i, (fin - *i));
	*i = fin;
	return (words);
}

static int	count_words(const char *str, char delim)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != delim) && (str[i + 1] == delim || str[i + 1] == '\0'))
		{
			count++;
		}
		i++;
	}
	return (count);
}

static void	ft_free(char **ret, int j)
{
	while (j >= 0)
	{
		free(ret[j]);
		j--;
	}
	free(ret);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	int		count;
	int		j;
	int		i;

	j = 0;
	i = 0;
	count = count_words(s, c);
	ret = ft_calloc(count + 1, sizeof(char *));
	if (ret == NULL)
		return (NULL);
	while (j < count)
	{
		ret[j] = copy_words(s, &i, c);
		if (ret[j] == NULL)
		{
			ft_free(ret, j);
			return (NULL);
		}
		j++;
	}
	return (ret);
}
/*int	main (void)
{
	const char *pepe ="hola que tal"; 
	char c = ' ';
	char **temp = ft_split(&pepe,c);
	int i = 0;
	while (temp[i] != '\0')
	{
		printf("%s\n",temp[i]);
		i++;
	}
	return (0);
}
*/