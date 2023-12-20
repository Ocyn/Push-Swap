NAME = push_swap

SRCC_DIR = src/

SRCC = \
push_swap.c \
ft_parse_arg.c \
ft_tools.c \
ft_sort.c \
ft_sort2.c \
ft_radix.c \
ft_sort_utils.c \
ft_manual_cases.c \
ft_error.c \
ft_index.c \
ft_clist.c

SRCC_PATH = $(addprefix $(SRCC_DIR),$(SRCC))

CC = gcc
FLAGS = -Wall -Wextra -Werror -g3

INCLUDE = push_swap.h

OBJ_DIR = OBJ/
OBJ_PATH = $(SRCC_DIR)$(OBJ_DIR)

LIB_DIR = lib/
LIB_LIBFT_DIR = $(LIB_DIR)Libft/
LIB_PRINTF_DIR = $(LIB_DIR)ft_printf/
LIB = 	libft.a \
		ft_printf.a

LIB1 = $(LIB_DIR)/libft.a
LIB2 = $(LIB_DIR)/ft_printf.a

LIB_PATH = $(addprefix $(LIB_DIR), $(LIB))

OBJ = $(addprefix $(OBJ_PATH), $(SRCC:.c=.o))

all : $(NAME)

$(LIB1): force
	@make -sC $(LIB_DIR)Libft/

$(LIB2): force
	@make -sC $(LIB_DIR)ft_printf/

$(NAME): $(OBJ) $(LIB1) $(LIB2)
	$(CC) $(FLAGS) $(OBJ) $(INCLUDE) $(LIB_PATH) -o $(NAME)

$(OBJ_PATH)%.o : $(SRCC_DIR)%.c $(INCLUDE) 
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

re : fclean $(NAME)

fclean : clean
	rm -rf $(NAME)
	rm -rf lib/*.a
	make fclean -C $(LIB_DIR)Libft/
	make fclean -C $(LIB_DIR)ft_printf/

clean :
	rm -rf $(OBJ)
	make clean -C $(LIB_DIR)Libft/
	make clean -C $(LIB_DIR)ft_printf/

force :

.PHONY: all re fclean clean force