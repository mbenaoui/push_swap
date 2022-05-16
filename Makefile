# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 23:35:20 by mbenaoui          #+#    #+#              #
#    Updated: 2022/04/23 17:12:00 by mbenaoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRC_FILE = libft/ft_strlen.c libft/ft_strjoin.c libft/ft_split.c libft/ft_isdigit.c libft/ft_lstsize.c \
	libft/ft_strdup.c libft/ft_atoi.c libft/ft_lstadd_back.c libft/ft_lstlast.c libft/ft_lstnew.c \
	operation/ft_pa.c operation/ft_pb.c operation/ft_ra.c  operation/ft_rb.c operation/ft_rr.c operation/ft_rra.c \
	operation/ft_rrb.c operation/ft_rrr.c\
	case_sort.c check_errore.c ft_sort_3.c read_arg.c tran_linked_tab.c ft_aft.c ft_strlen_tab.c the_longest_chain.c \
	position_ab.c finl_sort.c max_stack.c fonction_utls.c apply_sort.c

 SRC_FILE_BONUS = libft/ft_strlen.c libft/ft_strjoin.c libft/ft_split.c libft/ft_isdigit.c libft/ft_lstsize.c \
	libft/ft_strdup.c libft/ft_atoi.c libft/ft_lstadd_back.c libft/ft_lstlast.c libft/ft_lstnew.c \
	operation/ft_pa.c operation/ft_pb.c operation/ft_ra.c  operation/ft_rb.c operation/ft_rr.c operation/ft_rra.c \
	operation/ft_rrb.c operation/ft_rrr.c check_errore.c  tran_linked_tab.c  ft_strlen_tab.c checker.c \
	get_next_line/get_next_line.c \
	operation/ft_sa.c operation/ft_sb.c operation/ft_ss.c libft/ft_strcmp.c libft/ft_strchr.c
	
CC = gcc
RM = rm -f
HEADER = push_swap.h
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
BONUS = checker
OBJ_FILE = $(SRC_FILE:.c=.o)
OBJ_FILE_BONUS = $(SRC_FILE_BONUS:.c=.o)

all : $(NAME)

%.o:%.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME) : $(OBJ_FILE) push_swap.h
	@echo "\033[0;34m\n\nCompiling push_swap..."
	@$(CC) $(CFLAGS) $(OBJ_FILE) -o $(NAME)
	@echo $(NAME) compiled
	
bonus : $(BONUS)	

$(BONUS) : $(OBJ_FILE_BONUS) push_swap.h
	@echo "\033[0;34m\n\nCompiling push_swap..."
	@$(CC) $(CFLAGS) $(OBJ_FILE_BONUS) -o $(BONUS)
	@echo $(BONUS) compiled

clean :
	@echo "\033[0;31m\nDeleting objects..."
	@rm -f $(OBJ_FILE) $(OBJ_FILE_BONUS)
	@echo $(NAME) object files cleaned
	@echo $(BONUS) object files cleaned

fclean :	clean
	@rm -f $(NAME) $(BONUS)
	@echo $(NAME) cleaned
	@echo $(BONUS) cleaned

re : fclean all
