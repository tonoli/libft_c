/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itonoli- <itonoli-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 19:07:06 by itonoli-          #+#    #+#             */
/*   Updated: 2017/06/26 20:51:05 by itonoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_strdel(char **as)
{
	int	i;

	i = 0;
	if (as != NULL)
	{
		free(as[i]);
		as[i] = NULL;
	}
}
