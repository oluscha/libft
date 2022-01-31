NAME	=	libft.a
FLAGS	=	-Wall -Wextra -Werror

SRCS = 	ft_atoi.c		\
		ft_bzero.c		\
		ft_calloc.c		\
		ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_itoa.c		\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_memset.c		\
		ft_putchar_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_putstr_fd.c	\
		ft_split.c		\
		ft_strchr.c		\
		ft_strdup.c		\
		ft_strjoin.c	\
		ft_strlcat.c	\
		ft_strlcpy.c	\
		ft_strlen.c		\
		ft_strmapi.c	\
		ft_strncmp.c	\
		ft_strnstr.c	\
		ft_strrchr.c	\
		ft_striteri.c	\
		ft_strtrim.c	\
		ft_substr.c		\
		ft_tolower.c	\
		ft_toupper.c
OBJS = $(SRCS:.c=.o)

SRCS_BONUS =	ft_lstadd_back_bonus.c	\
			ft_lstadd_front_bonus.c	\
			ft_lstclear_bonus.c		\
			ft_lstdelone_bonus.c	\
			ft_lstiter_bonus.c		\
			ft_lstlast_bonus.c		\
			ft_lstnew_bonus.c		\
			ft_lstsize_bonus.c

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

HEADER = libft.h

.PHONY: all clean fclean re bonus

all:	$(NAME)

$(NAME): $(OBJS) ${HEADER}
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

bonus:	$(OBJS_BONUS)
		ar rc $(NAME) $(OBJS_BONUS)
		ranlib $(NAME)

.c.o:
		gcc $(FLAGS) -c $< -o $(<:.c=.o)

%.o		:	%.c $(HEADER)
			$(CC) -o $(FLAGS) ${INCLUDE} -c $< -o $@

clean:
		rm -rf $(OBJS) $(OBJS_BONUS)

fclean:	clean
		rm -rf $(NAME)

re:		fclean all
