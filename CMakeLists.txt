.PHONY:all
all:server
server:server.c
	gcc -o $@ $^

.PHONY:clean
clean:
	rm -f client server