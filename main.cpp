#include "Prototype.hpp"
#include "PrototypeFactory.hpp"
#include "Circunferencia.hpp"
#include "Retangulo.hpp"

#include <iostream>


int main() {
  	PrototypeFactory* prototypeFactory{new PrototypeFactory};
  	prototypeFactory->Cliente(*prototypeFactory);
  	
  
  	delete prototypeFactory;

  	return 0;
};
