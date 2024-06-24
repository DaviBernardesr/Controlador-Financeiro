#ifndef SALDO_H
#define SALDO_H

#include <iostream>
using namespace std;

class Saldo {
	public:
		Saldo();
		Saldo(float);
		Saldo(const Saldo&);
		~Saldo();
		float getValor();
		void setValor(const float);
		Saldo& operator=(const Saldo&);
		void extratoSaldo();
	private:
		float valor;

};
#endif
