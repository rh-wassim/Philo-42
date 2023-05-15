NAME		=	philo

HEADER		=	philo.h

CC			=	gcc

FLAGS		=	-Werror -Wall -Wextra -g -pthread

SRCS		=	src/main.c \
				src/actions.c \
				src/threads.c \
				src/init.c \
				src/utils2.c \
				src/utils1.c \

OBJS		=	$(SRCS:.c=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) $(FLAGS) -I $(HEADER) $(OBJS) -o $(NAME)
clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm -rf $(NAME)

re			:	fclean all