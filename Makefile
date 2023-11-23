CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=vpl_exec

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

SOURCES = $(wildcard $(SRC_DIR)/*.cpp)

OBJECTS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SOURCES))

$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^ $(SFMLFLAGS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -c $< -o $@

run: $(TARGET)
	./$(TARGET)