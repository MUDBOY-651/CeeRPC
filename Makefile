PROJ_ROOT = $(abspath .)
PROTOBUF_SRC_DIR = ${PROJ_ROOT}/src/protobuf/protobuf_src
PROTOBUF_GEN_DIR = ${PROJ_ROOT}/src/protobuf/protobuf_gen


client:
	g++ -std=c++20 client.cpp src/net/socket.cc src/net/inet_address.cc -I src/util/ -o client 
server:
	g++ -std=c++20 server.cpp src/net/socket.cc src/net/inet_address.cc -I src/util/ -o server
update-protobuf:
	protoc -I=${PROTOBUF_SRC_DIR} --cpp_out=${PROTOBUF_GEN_DIR} ${PROTOBUF_SRC_DIR}/*.proto
clean-protobuf:
	rm ${PROTOBUF_GEN_DIR}/*.proto
clean:
	rm server && rm client