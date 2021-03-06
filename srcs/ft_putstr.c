/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <drosa-ta@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 19:30:10 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/12/09 16:55:20 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int n;

	if (!s)
		return ;
	n = 0;
	while (s[n])
	{
		ft_putchar(s[n++]);
	}
}
