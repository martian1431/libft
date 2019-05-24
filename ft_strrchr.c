/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 21:41:58 by pmalope           #+#    #+#             */
/*   Updated: 2019/05/24 21:52:09 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char *ret;

	ret = 0;
	while (*s)
	{
		if (*s == c)
			ret = (char *)s;
		s++;
	}
	return (ret);
}
