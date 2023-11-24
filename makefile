# Makefile para compilar o projeto

# Compilador
CXX = g++
# Opções de compilação
CXXFLAGS = -std=c++11 -Wall

# Diretórios
INCLUDE_DIR = include
SRC_DIR = src
BUILD_DIR = build
BIN_DIR = bin

# Arquivos fonte
SRCS = $(wildcard $(SRC_DIR)/*.cpp)

# Objetos
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

# Nome do executável
TARGET = $(BIN_DIR)/main

# Regra principal
all: $(TARGET)

# Regra para compilar os objetos
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Regra para compilar o executável
$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Regra para limpar os arquivos gerados
clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

# Regra para rodar o programa
run:
	$(TARGET)

# Faz com que as regras não sejam confundidas com arquivos de mesmo nome
.PHONY: all clean run
