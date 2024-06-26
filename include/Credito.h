#ifndef CREDITO_H
#define CREDITO_H

#include "Saldo.h"

class Credito {
	public:
		Credito();
		Credito(string, float);
		Credito(const Credito&);
		~Credito();
		float getValorCredito();
		void setValorCredito(float);
		string getNomeCredito();
		void setNomeCredito(string);
		void setCreditoAssociado(Saldo&);
		Credito& operator=(const Credito&);
	private:
		string nomeCredito;
		float valorCredito;
		Saldo SaldoAssociado;
};

#endif