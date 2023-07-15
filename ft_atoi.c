/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:27:02 by yut               #+#    #+#             */
/*   Updated: 2023/07/14 23:30:46 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_max_result(const char *str);
static long	ft_min_result(const char *str);
int			ft_atoi(const char *str);

static long	ft_max_result(const char *str)
{
	size_t	i;
	long	result;

	i = 0;
	result = 0;
	while (ft_isdigit(str[i]))
	{
		if (result > LONG_MAX / 10)
			return (LONG_MAX);
		if (result * 10 > LONG_MAX - str[i] + '0')
			return (LONG_MAX);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

static long	ft_min_result(const char *str)
{
	size_t	i;
	long	result;

	i = 0;
	result = 0;
	while (ft_isdigit(str[i]))
	{
		if (result < LONG_MIN / 10)
			return (LONG_MIN);
		if (result * 10 < LONG_MIN + str[i] - '0')
			return (LONG_MIN);
		result = result * 10 - (str[i] - '0');
		i++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int		sign;
	size_t	i;

	sign = 1;
	i = 0;
	if (!str && !*str)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (sign == 1)
		return ((int)ft_max_result(&str[i]));
	else
		return ((int)ft_min_result(&str[i]));
}

// int main()
// {
//     printf("%d\n",atoi("-+1009a"));
//     printf("%d\n",ft_atoi("-+1009a"));
// }