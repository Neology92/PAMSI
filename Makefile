
TRGDIR=./
OBJ=./obj
FLAGS= -Wall -pedantic -std=c++14 -iquote inc

__start__: ${TRGDIR}/program

${TRGDIR}/program: ${OBJ} ${OBJ}/main.o ${OBJ}/quickSort.o ${OBJ}/heapSort.o\
                     ${OBJ}/mergeSort.o ${OBJ}/introSort.o ${OBJ}/functions.o

	g++ -o ${TRGDIR}/program ${OBJ}/main.o ${OBJ}/quickSort.o ${OBJ}/heapSort.o\
                     ${OBJ}/mergeSort.o ${OBJ}/introSort.o ${OBJ}/functions.o

${OBJ}:
	mkdir ${OBJ}

${OBJ}/main.o: src/main.cpp inc/quickSort.hh inc/mergeSort.hh\
					 inc/introSort.hh inc/functions.hh
	g++ -c ${FLAGS} -o ${OBJ}/main.o src/main.cpp

${OBJ}/functions.o: src/functions.cpp inc/functions.hh
	g++ -c ${FLAGS} -o ${OBJ}/functions.o src/functions.cpp

${OBJ}/quickSort.o: src/quickSort.cpp inc/quickSort.hh
	g++ -c ${FLAGS} -o ${OBJ}/quickSort.o src/quickSort.cpp

${OBJ}/heapSort.o: src/heapSort.cpp inc/heapSort.hh
	g++ -c ${FLAGS} -o ${OBJ}/heapSort.o src/heapSort.cpp

${OBJ}/mergeSort.o: src/mergeSort.cpp inc/mergeSort.hh
	g++ -c ${FLAGS} -o ${OBJ}/mergeSort.o src/mergeSort.cpp

${OBJ}/introSort.o: src/introSort.cpp inc/introSort.hh
	g++ -c ${FLAGS} -o ${OBJ}/introSort.o src/introSort.cpp



clean:
	rm -f ${TRGDIR}/program ${OBJ}/*
