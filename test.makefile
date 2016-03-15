test: aes256.cpp aes256.h test.cpp
	g++ -std=c++11 -o test aes256.cpp test.cpp aes256.h

