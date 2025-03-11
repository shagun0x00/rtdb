# Compiler and flags
CC = clang
CFLAGS = -Wall -Wextra -std=c99

# Files
TARGET = main
OBJS = main.o hashtable.o

# Default target
all: $(TARGET)

# Linking
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compile object files
main.o: main.c hashtable.h
	$(CC) $(CFLAGS) -c main.c

hashtable.o: hashtable.c hashtable.h
	$(CC) $(CFLAGS) -c hashtable.c

# Clean build files
clean:
	rm -f $(TARGET) $(OBJS)
