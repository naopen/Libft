/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:09:46 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/20 15:14:22 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// メモリ領域*s1と*s2の最初のnバイトを比較する
// s1 > s2なら正の値を、s1 < s2なら負の値を、s1 = s2なら0を返す
// 途中にヌル文字 ('\0') があっても、比較を続ける

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				diff;

	if (!n)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	n++;
	while (--n)
	{
		diff = *str1 - *str2;
		if (diff != 0)
			return (diff);
		str1++;
		str2++;
	}
	return (0);
}
