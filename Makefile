all:
	g++ whitener.cpp -lboost_filesystem -lboost_system -o white
debug:
	g++ -Wall -g whitener.cpp -lboost_filesystem -lboost_system -o white
