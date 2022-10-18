parametrosCompilacao=-Wall #-Wshadow
nomeAula=prototype

all: $(nomeAula) 
	
$(nomeAula):main.o Prototype.o Circunferencia.o Retangulo.o PrototypeFactory.o
	g++ -o $(nomeAula) main.o Prototype.o Circunferencia.o Retangulo.o PrototypeFactory.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Prototype.o: Prototype.hpp Prototype.cpp
	g++ -c Prototype.cpp $(parametrosCompilacao)

Circunferencia.o: Circunferencia.hpp Circunferencia.cpp
	g++ -c Circunferencia.cpp $(parametrosCompilacao)

Retangulo.o: Retangulo.hpp Retangulo.cpp
	g++ -c Retangulo.cpp $(parametrosCompilacao)

PrototypeFactory.o: PrototypeFactory.hpp PrototypeFactory.cpp
	g++ -c PrototypeFactory.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomeAula)
