exe: plant.o zombie.o main.o guisantes.o
	g++ plant.o zombie.o main.o guisantes.o -o exe

main.o: main.cpp plant.h zombie.h
	g++ -c main.cpp

plant.o: plant.cpp plant.h
	g++ -c plant.cpp

zombie.o: zombie.cpp zombie.h
	g++ -c zombie.cpp

guisantes.o: guisantes.cpp plant.h guisantes.h
	g++ -c guisantes.cpp