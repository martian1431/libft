/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:55:18 by pmalope           #+#    #+#             */
/*   Updated: 2019/05/23 13:16:02 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncpy(char *dst, const char *src, size_t len)
{
    size_t index;

    index = 0;
    while (src[index] != '\0' && index < len)
    {
        dst[index] = src[index];
        index++;
    }
    dst[index] = '\0';
    return (dst);
}
