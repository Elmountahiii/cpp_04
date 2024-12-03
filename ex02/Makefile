NAME = abstract
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp
HEADERS = Animal.hpp Dog.hpp Cat.hpp  Brain.hpp WrongAnimal.hpp WrongCat.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all