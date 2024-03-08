/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 22:14:06 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/08 12:11:51 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_node
{
	int				data;
	int				index;
	int				pos;
	struct s_node	*next;
}	t_node;
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
t_list	*ft_lstnew(void *content);
t_node	*create_stack(int **arg_intger, int size);
t_node	*ft_lstlast(t_node *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	free_dynamic(char **argement, int count);
void	free_stack(t_node **stack);
void	check(t_node **a, t_node **b, int x);
char	*ft_strdup(char const *src);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *str, int number_of_word);
char	*get_next_line(int fd);
char	*f_strjoin(char *str1, char *str2, int line_b);
char	*free_line(char *back_buf);
char	*f_insial(void);
char	*start(char *arr, int fd);
char	*by_line(char *str);
int		verifier_option(char *str);
int		excute_option(t_list **opt, t_node **a, t_node **b);
int		check_stack_sort(t_node **stack_is_sort);
int		*convert(char **schedule, int size);
int		count_word(const char *word);
int		ft_lstsize(t_node *lst);
int		check_nl(char const *str);
int		ft_isdigit(int c);
int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlen(const char *theString);
long	ft_atoi(const char *string);

//**-----------rules-----------**//
void	config_postion(t_node **list);
void	ss(t_node **a, t_node **b, int fd);
void	rr(t_node **a, t_node **b, int fd);
void	rrr(t_node **a, t_node **b, int fd);
//----------for stack b-------//
void	pb(t_node **lsta, t_node **lstb, int fd);
void	sb(t_node **lst, int fd);
void	rb(t_node **lst, int fd);
void	rrb(t_node **lst, int fd);
//----------for stack a-------//
void	pa(t_node **lsta, t_node **lstb, int fd);
void	sa(t_node **lst, int fd);
void	ra(t_node **lst, int fd);
void	rra(t_node **lst, int fd);

#endif
