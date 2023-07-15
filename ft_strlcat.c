/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:51:16 by yut               #+#    #+#             */
/*   Updated: 2023/07/14 22:57:14 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	max;
	size_t	i;

	src_len = ft_strlen(src);
	if (dst == NULL && dstsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dstsize == 0)
		return (src_len);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	else
	max = dstsize - dst_len - 1;
	i = 0;
	while (i < max)
	{
		if (src[i] == '\0')
			break ;
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}

// static size_t ft_strlen(char *a)
// {
// 	int i = 0;
// 	while (a[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// #include <string.h>

// int main()
// {
//     char str1[1024] = "ABCDEF";
//     char str2[1024] = "ABCDEF";
//     char str3[] = "HH";
// 	size_t num1, num2;

//     num1 = strlcat(NULL, str3, 0);
//     num2 = ft_strlcat(NULL, str3, 0);
//     printf("strlcat:'%s'\n", str1);
//     printf("ft_strlcat:'%s'\n", str2);
//     printf("strlcat:'%zu'\n", num1);
//     printf("ft_strlcat:'%zu'\n", num2);

// }
