#include "Circunferencia.hpp"

#include <iostream>

Circunferencia::Circunferencia(std::string nome, unsigned int raio) 
	: Prototype{nome}, raio{raio}{

}

Prototype* Circunferencia::Clone() const{
    return new Circunferencia(*this);
  }
