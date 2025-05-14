# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -g -Iinclude

# Source files (all in the /src directory)
SRCS = src/main.c src/game.c src/menu.c src/utils.c

# Object files (generated from the source files)
OBJS = $(SRCS:.c=.o)

# Output executable name
TARGET = snake_game

# Default target
all: $(TARGET)

# Linking the object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Compiling .c files to .o object files
%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target to remove object files and the executable
clean:
	rm -f $(OBJS) $(TARGET)

# Rebuild everything
rebuild: clean all
