/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 05:11:04 by yut               #+#    #+#             */
/*   Updated: 2023/07/12 22:15:27 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0x00 && c <= 0x7f);
}

// #include <ctype.h>

// int	main(void)
// {
// 	printf("%d\n", isascii(1));
// 	printf("%d\n", ft_isascii(1));
// // }
