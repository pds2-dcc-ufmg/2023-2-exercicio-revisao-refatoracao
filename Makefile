CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=vpl_exec

BUILD_DIR	= ./build
SRC_DIR     = ./src
INCLUDE_DIR = ./include

${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/Banco.o ${BUILD_DIR}/ContaBancaria.o ${BUILD_DIR}/ContaCorrente.o ${BUILD_DIR}/ContaPoupanca.o ${BUILD_DIR}/ExcecaoBanco.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${BUILD_DIR}/${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/ExcecaoBanco.o: ${INCLUDE_DIR}/ExcecaoBanco.hpp ${SRC_DIR}/entidades/ExcecaoBanco.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/entidades/ExcecaoBanco.cpp -o ${BUILD_DIR}/ExcecaoBanco.o

${BUILD_DIR}/ContaBancaria.o: ${INCLUDE_DIR}/ContaBancaria.hpp ${INCLUDE_DIR}/ExcecaoBanco.hpp ${SRC_DIR}/entidades/ContaBancaria.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/entidades/ContaBancaria.cpp -o ${BUILD_DIR}/ContaBancaria.o

${BUILD_DIR}/Banco.o: ${INCLUDE_DIR}/Banco.hpp ${INCLUDE_DIR}/ContaBancaria.hpp ${SRC_DIR}/entidades/Banco.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/entidades/Banco.cpp -o ${BUILD_DIR}/Banco.o

${BUILD_DIR}/ContaCorrente.o: ${INCLUDE_DIR}/ContaCorrente.hpp ${INCLUDE_DIR}/Banco.hpp ${SRC_DIR}/entidades/ContaCorrente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/entidades/ContaCorrente.cpp -o ${BUILD_DIR}/ContaCorrente.o

${BUILD_DIR}/ContaPoupanca.o: ${INCLUDE_DIR}/ContaPoupanca.hpp ${INCLUDE_DIR}/Banco.hpp ${SRC_DIR}/entidades/ContaPoupanca.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/entidades/ContaPoupanca.cpp -o ${BUILD_DIR}/ContaPoupanca.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/ContaBancaria.hpp ${INCLUDE_DIR}/Banco.hpp ${INCLUDE_DIR}/ContaCorrente.hpp ${INCLUDE_DIR}/ContaPoupanca.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

# Rule for cleaning files generated during compilation. 
# Call 'make clean' to use it
clean:
	rm -f ${BUILD_DIR}/* 