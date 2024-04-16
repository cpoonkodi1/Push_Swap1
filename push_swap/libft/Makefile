CFILES			=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c
CFILES			+=	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c
CFILES			+=	ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c
CFILES			+=	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c
CFILES			+=	ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c
CFILES			+=	ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c
CFILES			+=	ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c
CFILES			+=	ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c
CFILES			+=	ft_tolower.c ft_toupper.c

CFILES_BONUS	=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c
CFILES_BONUS	+=	ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c
CFILES_BONUS	+=	ft_lstmap_bonus.c

HEADER			=	libft.h

OBJ_DIR			=	objects

FILE_DIR 		=	files

OBJECTS			=	$(CFILES:%.c=$(OBJ_DIR)/%.o)
OBJECTS_BONUS	=	$(CFILES_BONUS:%.c=$(OBJ_DIR)/%.o)

NAME			=	libft.a
NAME_BONUS		=	libft_bonus.a

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror

AR				=	ar
ARFLAGS 		=	rcs

RM				=	rm -rf

$(OBJ_DIR)/%.o:		%.c
					@ $(CC) $(CFLAGS) -c $< -o $@

all:				$(NAME)

bonus:				$(NAME_BONUS)

$(NAME):			$(OBJ_DIR) $(OBJECTS)
					@ $(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

$(NAME_BONUS):		$(NAME) $(OBJ_DIR) $(OBJECTS_BONUS)
					@ $(AR) $(ARFLAGS) $(NAME) $(OBJECTS_BONUS)
					cp $(NAME) $(NAME_BONUS)

$(OBJ_DIR):
					@ mkdir -p $(OBJ_DIR)
					@ mkdir -p $(FILE_DIR)

clean:
					@ $(RM) $(OBJ_DIR) $(FILE_DIR)

fclean:				clean
					@ $(RM) $(NAME) $(NAME_BONUS)

re:					fclean all

.PHONY:				all clean fclean re bonus