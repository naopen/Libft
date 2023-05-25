/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:15:18 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/21 19:16:50 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 引数として渡された文字列 *s の各文字に関数 f を適用し、そのインデックスを第1引数として渡す。
// 各文字はポインタとしてfに渡され、必要に応じて修正される。

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = -1;
	while (s[++i])
		f(i, &s[i]);
}