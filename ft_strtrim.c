/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:42:05 by yut               #+#    #+#             */
/*   Updated: 2023/07/15 00:11:04 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_trim(const char *set, char c);
static char	*new_str(const char *s1, size_t start, size_t end);
char		*ft_strtrim(const char *s1, const char *set);

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (to_trim(set, s1[i]))
		i++;
	while (to_trim(set, s1[j]))
		j--;
	return (new_str(s1, i, j - i + 1));
}

static char	*new_str(const char *s1, size_t start, size_t end)
{
	char	*str;
	size_t	i;

	if (end <= 0 || start >= strlen(s1))
		return (strdup(""));
	str = ft_calloc(end + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < end)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}

static int	to_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

// int main()
// {
//  	char str1[100] = "ababaaaMy name is Simonbbaaabbab";
//  	char str2[100] = "ab";

//  	char *result = ft_strtrim(str1,str2);
//  	printf("The result is: %s\n", result);
//  	return (0);
// }