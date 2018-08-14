CC = g++
PROG_CIRC = $(BIN)/circulo
PROG_RET = $(BIN)/retangulo
PROG_TRI = $(BIN)/triangulo

OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJ_CIRC = $(OBJ)/circuloMain.o $(OBJ)/circulo.o $(OBJ)/calculadorAreaCirculo.o 
OBJ_RET = $(OBJ)/retanguloMain.o $(OBJ)/retangulo.o $(OBJ)/calculadorAreaRetangulo.o 
OBJ_TRI = $(OBJ)/trianguloMain.o $(OBJ)/triangulo.o $(OBJ)/calculadorAreaTriangulo.o 


all: $(PROG_CIRC) $(PROG_RET) $(PROG_TRI)

$(PROG_CIRC): $(OBJ_CIRC)
	$(CC) $(CPPFLAGS) -o $(PROG_CIRC) $(OBJ_CIRC)

$(OBJ)/circulo.o: $(SRC)/circulo.cpp $(INC)/circulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/circulo.cpp -o $(OBJ)/circulo.o

$(OBJ)/calculadorAreaCirculo.o: $(SRC)/calculadorAreaCirculo.cpp $(INC)/calculadorArea.h
	$(CC) $(CPPFLAGS) -c $(SRC)/calculadorAreaCirculo.cpp -o $(OBJ)/calculadorAreaCirculo.o

$(OBJ)/circuloMain.o: $(SRC)/circuloMain.cpp $(INC)/calculadorArea.h
	$(CC) $(CPPFLAGS) -c $(SRC)/circuloMain.cpp -o $(OBJ)/circuloMain.o

$(PROG_RET): $(OBJ_RET)
	$(CC) $(CPPFLAGS) -o $(PROG_RET) $(OBJ_RET)

$(OBJ)/retangulo.o: $(SRC)/retangulo.cpp $(INC)/retangulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/retangulo.cpp -o $(OBJ)/retangulo.o

$(OBJ)/calculadorAreaRetangulo.o: $(SRC)/calculadorAreaRetangulo.cpp $(INC)/calculadorArea.h
	$(CC) $(CPPFLAGS) -c $(SRC)/calculadorAreaRetangulo.cpp -o $(OBJ)/calculadorAreaRetangulo.o

$(OBJ)/retanguloMain.o: $(SRC)/retanguloMain.cpp $(INC)/calculadorArea.h
	$(CC) $(CPPFLAGS) -c $(SRC)/retanguloMain.cpp -o $(OBJ)/retanguloMain.o

$(PROG_TRI): $(OBJ_TRI)
	$(CC) $(CPPFLAGS) -o $(PROG_TRI) $(OBJ_TRI)

$(OBJ)/triangulo.o: $(SRC)/triangulo.cpp $(INC)/triangulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/triangulo.cpp -o $(OBJ)/triangulo.o

$(OBJ)/calculadorAreaTriangulo.o: $(SRC)/calculadorAreaTriangulo.cpp $(INC)/calculadorArea.h
	$(CC) $(CPPFLAGS) -c $(SRC)/calculadorAreaTriangulo.cpp -o $(OBJ)/calculadorAreaTriangulo.o
		
$(OBJ)/trianguloMain.o: $(SRC)/trianguloMain.cpp $(INC)/calculadorArea.h
	$(CC) $(CPPFLAGS) -c $(SRC)/trianguloMain.cpp -o $(OBJ)/trianguloMain.o


		
