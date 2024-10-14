CC = c++
CFLAGS = -Wall -Wextra -Werror
NAME = phonebook
SRC = ./PhoneBook.cpp ./Contacts.cpp
OBJ = ${SRC:.cpp=.o}
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
MAGENTA = \033[0;35m
CYAN = \033[0;36m
WHITE = \033[0;37m
RESET = \033[0m

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $^ -o $(NAME)
	@echo "$(GREEN)The Awesome Phonebook is Compiled: $(WHITE)Execute ./$(NAME)$(RESET)"

clean:
	@rm -f $(OBJ)
	@echo "$(GREEN)Object Files Cleaned$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(GREEN)Project cleaned$(RESET)"

re: fclean all
