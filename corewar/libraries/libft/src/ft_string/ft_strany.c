/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strany.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slynell <slynell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 11:56:47 by slynell           #+#    #+#             */
/*   Updated: 2020/07/25 14:00:49 by slynell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strany(char const *str, const int32_t c)
{
	if (str == NULL)
		return (0);
	if ((unsigned char)c == '\0')
		return (1);
	while (*str)
	{
		if (*str == (unsigned char)c)
			return (1);
		str++;
	}
	return (0);
}
