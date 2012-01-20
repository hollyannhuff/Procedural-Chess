out: chessTest.o
	g++ -o out chessTest.cpp
chessTest.o: chessTest.cpp chess.h
	g++ chessTest.cpp -c
chess.o: chess.cpp chess.h
	g++ chess.cpp
