/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:34:38 by pmalope           #+#    #+#             */
/*   Updated: 2019/05/21 14:34:29 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}
