client:
	g++ -std=c++20 client.cpp src/net/socket.cc src/net/inet_address.cc -I src/util/ -o client 
server:
	g++ -std=c++20 server.cpp src/net/socket.cc src/net/inet_address.cc -I src/util/ -o server
clean:
	rm server && rm client