/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 10:49:25 by asalama           #+#    #+#             */
/*   Updated: 2016/01/25 13:13:35 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"

# define BUFF_SIZE 2

typedef	struct			s_link
{
	int					fd;
	char				*mem;
	struct s_link		*next;
	struct s_link		*prev;
}						t_link;

int						get_next_line(int const fd, char **line);

#endif
