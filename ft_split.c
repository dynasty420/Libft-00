/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:53:38 by yut               #+#    #+#             */
/*   Updated: 2023/07/14 23:07:23 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dest, const char *src, unsigned int n);
static int	ft_cntwrd(char const *s, char c);
static char	*my_strndup(const char *str, size_t n);
static void	ft_initiate_vars(size_t *i, size_t *j, int *k);
char		**ft_split(char const *s, char c);
static void	*ft_free(char **str, int cntr);

static int	ft_cntwrd(char const *s, char c)
{
	unsigned int	i;
	int				cntr;

	i = 0;
	cntr = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			cntr++;
			i++;
		}
		while (s[i] && (s[i] != c))
			i++;
	}
	return (cntr);
}

char	*my_strndup(const char *str, size_t n)
{
	size_t	i;
	char	*dst;

	i = 0;
	dst = (char *)malloc(sizeof(char) * n + 1);
	if (!dst)
		return (0);
	while (str[i] && i < n)
	{
		dst[i] = str[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		k;
	char	**tab;

	ft_initiate_vars(&i, &j, &k);
	tab = (char **)malloc(sizeof(char *) * (ft_cntwrd(s, c)) + 1);
	if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			j = ++i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (i > j)
		{
			tab[k] = my_strndup(s + j, i - j);
			if (tab[k] == NULL)
				return (ft_free(tab, k));
			k++;
		}
	}
	tab[k] = NULL;
	return (tab);
}

static void	ft_initiate_vars(size_t *i, size_t *j, int *k)
{
	*i = 0;
	*j = 0;
	*k = 0;
}

static void	*ft_free(char **str, int cntr)
{
	int	i;

	i = 0;
	while (i < cntr)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

// int	main(void)
// {
// 	char *str = ",,,hello,,,world,,,42,,,tokyo,,,,";
// 	char **result = ft_split(str, ',');
// 	printf("The result is: %s\n", result[0]);
// 	printf("The result is: %s\n", result[1]);
// 	printf("The result is: %s\n", result[2]);
// 	printf("The result is: %s\n", result[3]);
// 	printf("The result is: %s\n", result[4]);
// 	printf("The result is: %s\n", result[5]);
// 	printf("The result is: %s\n", result[6]);

// 	return (0);
// }