/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 13:00:14 by hna               #+#    #+#             */
/*   Updated: 2020/07/06 15:02:20 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
int		ft_write(int fd, void *buf, int nbyte);
int		ft_read(int fd, void *buf, int nbyte);
char	*ft_strdup(char *s1);