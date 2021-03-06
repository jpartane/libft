/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:31:41 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/12 14:40:11 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function tests for a space or tab character
*/

int		ft_isblank(int c)
{
	return (c == '\t' || c == ' ');
}
