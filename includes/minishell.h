/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:16:30 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/05/29 17:54:49 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# define CN 4

# include <stdio.h>
# include <unistd.h>
# include <dirent.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <signal.h>
# include <libft.h>

char	*ft_readline(int ret);
void	ft_interpretator(char *cmd);
void	ft_cd(char *cmd);
void	ft_pwd(char *cmd);
void	ft_echo(char *cmd);
#endif
