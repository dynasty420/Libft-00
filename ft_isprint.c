/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 05:23:00 by yut               #+#    #+#             */
/*   Updated: 2023/07/22 16:32:41 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main(void)
// {
// 	printf("%d\n", isprint('a'));
// 	printf("%d\n", ft_isprint('a'));
// }