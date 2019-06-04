CC = gcc
CFLAGS = -W -WALL
TARGET = Main

$(TARGET) : main.o stack.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o stack.o

main.o : main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

stack.o : stack.c
	$(CC) $(CFLAGS) -c -o stack.o stack.c

clean: 
	rm *.o $(TARGET)
