NAME	= violence
CCXX	= c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

BUILD_DIR = build

SRCS	= main.cpp \
			HumanA.cpp \
			HumanB.cpp \
			Weapon.cpp \

OBJS = $(SRCS:%.cpp=$(BUILD_DIR)/%.o)

all: $(NAME)

$(OBJS): $(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CXX) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CCXX) $(CPPFLAGS) $(OBJS) -o $(NAME)


clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
