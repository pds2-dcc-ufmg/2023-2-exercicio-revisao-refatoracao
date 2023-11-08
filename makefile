
CC = g++

CFLAGS = -std=c++11

SOURCES = Banco.cpp ContaBancaria.cpp ContaCorrente.cpp ContaPoupanca.cpp main.cpp

EXECUTABLE = vpl_exec

all: $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(EXECUTABLE)

clean:
	rm -f $(EXECUTABLE)
	