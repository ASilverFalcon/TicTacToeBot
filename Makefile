game.o: game.cpp player.o board.o

board.o: board.h
player.o: player.h board.o
