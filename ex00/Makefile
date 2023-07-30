NAME	= zombie
CCXX	= c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp \
			newZombie.cpp \
			Zombie.cpp \
			randomChump.cpp \

OBJS	= ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CCXX) $(FLAGS) $(OBJS) -o $(NAME)


clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

bonus: all

rebonus: fclean bonus

.PHONY: norminette all ${NAME}
