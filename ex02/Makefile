MAKEFLAGS	+= --silent
NAME		= start
CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)
INC_DIR		= include/
SRC_DIR		= src/
OBJ_DIR		= obj/
SRCS		= $(shell find $(SRC_DIR) -type f -name "*.cpp")
OBJS		= $(patsubst $(SRC_DIR)%.cpp,$(OBJ_DIR)%.o,$(SRCS))


GREEN		= "\033[32m"
RED			= "\033[31m"
RESET		= "\033[0m"

all: $(NAME)
	@echo $(GREEN)"✅  $(NAME) compiled successfully!"$(RESET)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(@D)
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "🔧 Compiling "$< $(GREEN)"[OK]"$(RESET)

clean:
	@rm -rf $(OBJ_DIR)
	@echo $(RED)"🗑️  Object files removed!"$(RESET)

fclean: clean
	@rm -f $(NAME)
	@echo $(RED)"🧹  $(NAME) and libraries cleaned!"$(RESET)

re: fclean all

valgrind: $(NAME)
	valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./$(NAME)

.PHONY: all clean fclean re valgrind