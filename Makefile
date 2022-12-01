CC = cc
BIN = brthecho
OPT = -O2 -Wall

$(BIN): brunotheecho.c
	$(CC) $(OPT) -c brunotheecho.c
	$(CC) $(OPT) brunotheecho.o -o $(BIN)

