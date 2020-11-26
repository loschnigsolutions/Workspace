
all: client server


client : client.c
	gcc $< -o $@

server : server.c
	gcc $< -o $@

clean :
	rm -rf client server sample
