/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 10:45:01 by acalkins          #+#    #+#             */
/*   Updated: 2018/04/25 20:30:06 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int num1;

	num1 = 0;
	while (*(s1 + num1) && *(s1 + num1) == *(s2 + num1) && num1 < (int)n - 1)
		num1++;
	if (n)
		return (*((unsigned char *)s1 + num1) - *((unsigned char *)s2 + num1));
	return (0);
}
