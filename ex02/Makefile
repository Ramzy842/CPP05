# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 15:57:07 by rchahban          #+#    #+#              #
#    Updated: 2024/02/22 23:05:16 by rchahban         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CPP = c++

# Compiler flags
CPPFLAGS = -Werror -Wall -Wextra -std=c++98

# Includes (.hpp)
INCLUDES = -I./includes

# Source files
SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

# Object files generated from source files
OBJ = $(SRC:.cpp=.o)

# Name of the main executable to be generated
NAME = main

# Default target to be built
all: $(NAME)

# Rule to generate the main executable from the object files
$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(INCLUDES) $(OBJ) -o $(NAME)

# Rule to generate the object files from the source files
%.o: %.cpp
	$(CPP) $(CPPFLAGS) $(INCLUDES) -c $< -o $@

# Clean target to remove generated files
clean:
	rm -f $(OBJ)

# Fclean target to remove executable files and finally perform clean
fclean: clean
	rm -f $(NAME)

# Re target to rebuild the project from scratch
re: fclean all

.PHONY: all clean fclean re