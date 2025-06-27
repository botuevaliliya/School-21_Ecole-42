/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <hsilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:34:30 by hsilk             #+#    #+#             */
/*   Updated: 2022/01/09 13:41:57 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*ft_strnew(int size);
int		ft_strlen(const char *s);
int		ft_strchr(char *s, char c);
char	*ft_strjoin(char *s1, char const *s2, int i);
char	*ft_leave_line(char *buf);
char	*get_next_line(int fd);

#endif