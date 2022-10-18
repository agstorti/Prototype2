#ifndef RETANGULO_HPP
#define RETANGULO_HPP

#include "Prototype.hpp"
#include <iostream>

class Retangulo : virtual public Prototype {
	public:
		Retangulo(std::string nome, unsigned int largura, unsigned int altura);

		virtual ~Retangulo() = default;

		virtual Prototype *Clone() const override;

	private:
		unsigned int largura, altura;
		std::string nome;
};

#endif 
