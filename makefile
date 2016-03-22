exe: plant.o zombie.o main.o guisantes.o patata.o tiraagua.o znormal.o zarmadura.o
	g++ plant.o zombie.o main.o guisantes.o patata.o tiraagua.o znormal.o zarmadura.o -o exe

main.o: main.cpp plant.h zombie.h guisantes.h patata.h znormal.h zarmadura.o
	g++ -c main.cpp

plant.o: plant.cpp plant.h
	g++ -c plant.cpp

zombie.o: zombie.cpp zombie.h
	g++ -c zombie.cpp

guisantes.o: guisantes.cpp plant.h guisantes.h
	g++ -c guisantes.cpp

patata.o: patata.cpp plant.h patata.h
	g++ -c patata.cpp

tiraagua.o: tiraagua.cpp plant.h tiraagua.h
	g++ -c tiraagua.cpp

znormal.o: znormal.cpp zombie.h znormal.h
	g++ -c znormal.cpp

zarmadura.o: zarmadura.cpp zombie.h zarmadura.h
	g++ -c zarmadura.cpp