/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 23:48:40 by yut               #+#    #+#             */
/*   Updated: 2023/07/22 16:32:18 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int	main(void)
// {
// 	printf("L : %d\n", isdigit('2'));
// 	printf("J : %d\n", ft_isdigit('2'));
// 	printf("L : %d\n", isdigit('A'));
// 	printf("J : %d\n", ft_isdigit('A'));
// }