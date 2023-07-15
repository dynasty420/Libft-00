/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 01:19:25 by yut               #+#    #+#             */
/*   Updated: 2023/07/14 23:32:39 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("L1 : %d\n", isalnum('1'));
// 	printf("LA : %d\n", isalnum('A'));
// 	printf("J1 : %d\n", ft_isalnum('1'));
// 	printf("JA : %d\n", ft_isalnum('A'));
// }
