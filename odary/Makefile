# Makefile

# Specify the name of the binary file to generate
TARGET = bin/00-MyApp

# Specify the source directory
SRC_DIR = src

# Retrieve all the source and header files
SRC_FILES := $(wildcard $(SRC_DIR)/*.c)
HEADER_FILES := $(wildcard $(SRC_DIR)/*.h)

# Specify the compiler and flags
CC = gcc
#CFLAGS = -Wall -Wextra -g
GTKFLAGS = `pkg-config --cflags --libs gtk+-3.0`

# Generate the object files by replacing the .c extension with .o
#OBJ_FILES := $(patsubst $(SRC_DIR)/%.c, $(SRC_DIR)/%.o, $(SRC_FILES))

# Default target, which builds the binary file
all: $(TARGET)

# Rule to build the binary file
$(TARGET): $(SRC_FILES)
	$(CC) $^ -o $@ $(GTKFLAGS)

# Rule to build object files
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER_FILES)
	$(CC) $< -o $@ $(GTKFLAGS)

# Clean generated files
clean:
	rm -rf $(TARGET)

# Remove and recompile all files
rebuild:
	clean all

always:
	mkdir -p bin

# Phony targets (do not represent actual files)
.PHONY: all clean rebuild always