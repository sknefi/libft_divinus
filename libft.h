/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filip <filip@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:28:31 by fkarika           #+#    #+#             */
/*   Updated: 2024/12/25 16:04:52 by filip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct node
{
	int				data;
	int				cost;
	int				index;
	struct node		*next;
	struct node		*prev;
	struct node		*target_node;
}	t_node;

typedef struct dll
{
	char	name;
	int		size;
	t_node	*head;
	t_node	*tail;
}	t_dll;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_atoi(const char *str);
int		ft_atoii(const char *str, int *check_flag);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	ft_putnbr_fd(int n, int fd);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	**ft_split(char const *s, char c);
void	free_split_all(char **arr, int w);
void	free_split(char **arr);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
char	*get_next_line(int fd);
int		ft_printf(const char *str, ...);
void	ft_error(char *str);
void	ft_error_basic(void);
int		ft_isnumber(char *str);
// void	*dll_append(t_dll *dll, t_node *new_node);
// void	dll_clear(t_dll *dll);
// t_dll	*dll_create(char **argv, char name);
// t_dll	*dll_init(char name);
// void	dll_iteri(t_dll *dll, void (*f)(t_node *node));
// void	*dll_prepend(t_dll *dll, t_node *new_node);
// void	dll_printer(t_dll *dll);

#endif