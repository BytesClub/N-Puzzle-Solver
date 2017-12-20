CXX = g++
CFLAGS = -I ..

main.o: main.cpp NPuzzleSolverUtil.h
	$(CXX) $(CFLAGS) main.cpp NPuzzleSolverUtil.cpp

NPuzzleSolverUtil.o: NPuzzleSolverUtil.h NPuzzleSolverUtil.cpp
	$(CXX) $(CFLAGS) NPuzzleSolverUtil.cpp

NPuzzleSolver: main.o NPuzzleSolverUtil.o
	$(CXX) $(CFLAGS) main.o NPuzzleSolverUtil.o

clean:
	-rm *.o *~ 

install:
	@echo TODO: Implement this
