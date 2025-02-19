/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filip <filip@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:52:35 by fkarika           #+#    #+#             */
/*   Updated: 2025/02/08 11:56:49 by filip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static unsigned int	get_count_of_words(const char *s, char delimeter)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	if (s[0] != delimeter && s[0] != '\0')
		count++;
	i++;
	while (s[i])
	{
		if (s[i] != delimeter && s[i - 1] != '\0' && s[i - 1] == delimeter)
			count++;
		i++;
	}
	return (count);
}

void	free_split_all(char **arr, int w)
{
	while (w >= 0)
		free(arr[w--]);
	free(arr);
}

void	free_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

int	ft_split_len(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	unsigned int	i;
	unsigned int	word_index;
	unsigned int	word_len;

	arr = (char **)malloc((get_count_of_words(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	word_index = 0;
	while (word_index < get_count_of_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		word_len = 0;
		while (s[i + word_len] && s[i + word_len] != c)
			word_len++;
		arr[word_index] = (char *)malloc((word_len + 1) * sizeof(char));
		if (!arr[word_index])
			return (free_split_all(arr, word_index), NULL);
		ft_strlcpy(arr[word_index++], &s[i], word_len + 1);
		i += word_len;
	}
	arr[get_count_of_words(s, c)] = NULL;
	return (arr);
}
