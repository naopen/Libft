/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:08:51 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/17 13:13:13 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// もしcが小文字のアルファベット (ASCIIコードで97から122まで) または
// 大文字のアルファベット (ASCIIコードで65から90まで) なら1を返す
// そうでなければ0を返す

int	ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a')
		|| (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}
