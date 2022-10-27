all: BSTtest BSTtest2 BSTtestCD BSTtestCL BSTtestDD
BSTtest: BSTtest.cpp
	g++ -o $@ BSTtest.cpp
BSTtest2: BSTtest2.cpp
	g++ -o $@ BSTtest2.cpp
BSTtestCD: BSTtestCD.cpp
	g++ -o $@ BSTtestCD.cpp
BSTtestCL: BSTtestCL.cpp
	g++ -o $@ BSTtestCL.cpp
BSTtestDD: BSTtestDD.cpp
	g++ -o $@ BSTtestDD.cpp
clean: 
	rm -f BSTtest BSTtest2 BSTtestCD BSTtestCL BSTtestDD *.o