
CC = gcc
CFLAGS = -Wall -g


OBJS = connection_handler.o line.o request.o response.o router.o vec.o

EXEC = server

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(OBJS) -o $(EXEC)

connection_handler.o: connection_handler.c connection_handler.h
	$(CC) $(CFLAGS) -c connection_handler.c

line.o: line.c line.h
	$(CC) $(CFLAGS) -c line.c

request.o: request.c request.h
	$(CC) $(CFLAGS) -c request.c

response.o: response.c response.h
	$(CC) $(CFLAGS) -c response.c

router.o: router.c router.h
	$(CC) $(CFLAGS) -c router.c

vec.o: vec.c vec.h
	$(CC) $(CFLAGS) -c vec.c

clean:
	rm -f $(OBJS) $(EXEC)

.PHONY: all clean
