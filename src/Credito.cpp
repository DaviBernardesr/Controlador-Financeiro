#include "D:\Arquivos\PROJECT'S\Controlador Financeiro\include\Credito.h"
#include "iostream"

using namespace std;

Credito::Credito() {
	this->nomeCredito = "";
	this->valorCredito = 0;
}

Credito::Credito(string c, float v) {
	this->nomeCredito = c;
	this->valorCredito = v;
}

Credito::Credito(const Credito& obj) {
	this->nomeCredito = obj.nomeCredito;
	this->valorCredito = obj.valorCredito;
}

Credito::~Credito() {
	//Destrutor
}

float Credito::getValorCredito() {
	return this->valorCredito;
}

void Credito::setValorCredito(float v) {
	this->valorCredito = v;
}

string Credito::getNomeCredito() {
	return this->nomeCredito;
}

void Credito::setNomeCredito(string n) {
	this->nomeCredito = n;
}

void Credito::setCreditoAssociado(Saldo& c) {
	float novoSaldo = c.getValor() + this->valorCredito;
	c.setValor(novoSaldo);
}

Credito& Credito::operator=(const Credito& obj) {
	this->nomeCredito = obj.nomeCredito;
	this->valorCredito = obj.valorCredito;
	return *this;
}