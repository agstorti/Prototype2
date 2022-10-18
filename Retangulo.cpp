#include "Retangulo.hpp"
//#include "Prototype.hpp"

#include <iostream>

Retangulo::Retangulo(std::string nome, unsigned int largura, 
		unsigned int altura) 
	: Prototype{nome}, largura{largura}, altura{altura}{

}

Prototype* Retangulo::Clone() const{
    return new Retangulo(*this);
  }
