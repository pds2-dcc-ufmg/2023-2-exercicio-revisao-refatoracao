#Professor, na verdade eu tive dificuldade em utilizar o comando make no meu ambiente de desenvolvimento,
#visto que eu estou usando uma máquina windows e, mesmo tendo um subsystem linux, não consigo acessar o
#código fonte que está salvo nos arquivos do windows a partir do terminal do linux.
#Dessa forma eu desenvolvo, compilo e executo todo o código a partir do terminal imbutido do VS Code,
#porém o comando make não é reconhecido nesse terminal e dessa forma não pude testar o código abaixo
#em vez diz eu compilei manualmente o código.
#Como o código não é muito grande não foi tão problemático assim.

CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=vpl_exec.exe

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include


${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/ContaBancaria.o ${BUILD_DIR}/ContaCorrente.o ${BUILD_DIR}/ContaPoupanca.o ${BUILD_DIR}/Banco.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} ${BUILD_DIR}/*.o -o ${TARGET}

${BUILD_DIR}/ContaBancaria.o: ${INCLUDE_DIR}/ContaBancaria.hpp ${SRC_DIR}/ContaBancaria.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/ContaBancaria.cpp -o ${BUILD_DIR}/ContaBancaria.o

${BUILD_DIR}/ContaCorrente.o: ${INCLUDE_DIR}/ContaBancaria.hpp ${INCLUDE_DIR}/ContaCorrente.hpp ${SRC_DIR}/ContaCorrente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/ContaCorrente.cpp -o ${BUILD_DIR}/ContaCorrente.o

${BUILD_DIR}/ContaPoupanca.o: ${INCLUDE_DIR}/ContaBancaria.hpp ${INCLUDE_DIR}/ContaPoupanca.hpp ${SRC_DIR}/ContaPoupanca.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/ContaPoupanca.cpp -o ${BUILD_DIR}/ContaPoupanca.o

${BUILD_DIR}/Banco.o: ${INCLUDE_DIR}/ContaCorrente.hpp ${INCLUDE_DIR}/ContaPoupanca.hpp ${INCLUDE_DIR}/Banco.hpp ${SRC_DIR}/Banco.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Banco.cpp -o ${BUILD_DIR}/Banco.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/ContaBancaria.hpp ${INCLUDE_DIR}/ContaCorrente.hpp ${INCLUDE_DIR}/ContaPoupanca.hpp ${INCLUDE_DIR}/Banco.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o