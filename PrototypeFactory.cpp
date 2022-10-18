#include "PrototypeFactory.hpp"
#include "Prototype.hpp"
#include "Retangulo.hpp"
#include "Circunferencia.hpp"

#include <iostream>

PrototypeFactory::PrototypeFactory(){
	prototypes[Type::PROTOTYPE1] = new Circunferencia ("Circunferencia", 50);
	prototypes[Type::PROTOTYPE2] = new Retangulo("Retangulo",10, 20);
}

PrototypeFactory::~PrototypeFactory() {
	delete prototypes[Type::PROTOTYPE1];
	delete prototypes[Type::PROTOTYPE2];
}

Prototype* PrototypeFactory::CreatePrototype(Type type) {
    	return prototypes[type]->Clone();
}

void PrototypeFactory::Cliente(PrototypeFactory &prototypeFactory) {
  	std::cout << "Criando o Prototype da Circunferencia." << std::endl;

  	Prototype *prototype = prototypeFactory.CreatePrototype(Type::PROTOTYPE1);
	prototype->Method(1);

	delete prototype;

	std::cout << std::endl;

  	std::cout << "Criando o prototype do Retangulo." << std::endl;

  	prototype = prototypeFactory.CreatePrototype(Type::PROTOTYPE2);
	prototype->Method(2);

  	delete prototype;
}
