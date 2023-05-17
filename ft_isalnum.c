/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:13:49 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/17 13:14:14 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// もしcが数字 (ASCIIコードで48から57まで) または
// 小文字のアルファベット (ASCIIコードで97から122まで) または
// 大文字のアルファベット (ASCIIコードで65から90まで) なら1を返す
// そうでなければ0を返す

int	ft_isalnum(int c)
{
	if ((c <= 'z' && c >= 'a')
		|| (c <= 'Z' && c >= 'A')
		|| (c <= '9' && c >= '0'))
		return (1);
	return (0);
}