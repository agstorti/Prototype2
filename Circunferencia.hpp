#ifndef CIRCUNFERENCIA_HPP
#define CIRCUNFERENCIA_HPP

#include "Prototype.hpp"
#include <iostream>

class Circunferencia : virtual public Prototype {
	public:
		Circunferencia(std::string nome, unsigned int raio);

		virtual ~Circunferencia() = default;

		virtual Prototype *Clone() const override;

	private:
		unsigned int raio;
		std::string nome;
};

#endif 
