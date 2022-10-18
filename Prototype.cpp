#include "Prototype.hpp"
#include <iostream>



Prototype::Prototype(){
}

Prototype::Prototype(std::string nome) 
	: nome{nome}{
}


	
void Prototype::Method(float prototypeCampo) {
 	this->prototypeCampo = prototypeCampo;
    	std::cout << "Chamando o metodo. " << nome << " " 
		<< prototypeCampo << std::endl;
}
