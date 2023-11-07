CC			=	cc

CCL			=	ar rc

FLAGS 		=	-Wall -Wextra -Werror

SRCPATH 	=	src/

SRCS 		=	$(SRCPATH)ft_charto.c		\
				$(SRCPATH)ft_memcpy.c		\
				$(SRCPATH)ft_putnbr_fd.c	\
				$(SRCPATH)ft_strdup.c		\
				$(SRCPATH)ft_strlen.c		\
				$(SRCPATH)ft_substr.c		\
				$(SRCPATH)ft_bzero.c		\
				$(SRCPATH)ft_itoa.c			\
				$(SRCPATH)ft_memmove.c		\
				$(SRCPATH)ft_putstr_fd.c	\
				$(SRCPATH)ft_striteri.c		\
				$(SRCPATH)ft_strmapi.c		\
				$(SRCPATH)ft_bzero.c		\
				$(SRCPATH)ft_math.c			\
				$(SRCPATH)ft_memset.c		\
				$(SRCPATH)ft_split.c		\
				$(SRCPATH)ft_strjoin.c		\
				$(SRCPATH)ft_strncmp.c		\
				$(SRCPATH)ft_calloc.c		\
				$(SRCPATH)ft_memchr.c		\
				$(SRCPATH)ft_putchar_fd.c	\
				$(SRCPATH)ft_strchr.c		\
				$(SRCPATH)ft_strlcat.c		\
				$(SRCPATH)ft_strnstr.c		\
				$(SRCPATH)ft_charis.c		\
				$(SRCPATH)ft_memcmp.c		\
				$(SRCPATH)ft_putendl_fd.c	\
				$(SRCPATH)ft_strcpy.c		\
				$(SRCPATH)ft_strlcpy.c		\
				$(SRCPATH)ft_strtrim.c		\
				$(SRCPATH)ft_atoi.c			\
				$(SRCPATH)ft_puthex_fd.c	\
				$(SRCPATH)ft_putptr.c		\

INCLUDEPATH =	include/

OBJ 		=	$(SRCS:.c=.o)

NAME 		=	libft.a

$(NAME): $(OBJ)
	$(CCL) $(NAME) $(OBJ)

.c.o:
	$(CC) $(FLAGS) -c $< -I $(INCLUDEPATH) -o ${<:.c=.o}

clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)

all: $(NAME)

## bonus: all
##	$(CC) $(FLAGS) -c 

re: fclean all

.PHONY: clean fclean all re
