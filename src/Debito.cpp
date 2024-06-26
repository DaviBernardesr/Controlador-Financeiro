#include "D:\Arquivos\PROJECT'S\Controlador Financeiro\include\Debito.h"
#include <iostream>

using namespace std;

Debito::Debito() {
    this->nome = "";
    this->valorDebito = 0;
}

Debito::Debito(string d, float v) {
    this->nome = d;
    this->valorDebito = v;
}

Debito::Debito(const Debito& obj) {
    this->nome = obj.nome;
    this->valorDebito = obj.valorDebito;
    this->saldoAssociado = obj.saldoAssociado;
}

Debito::~Debito(){
    //Destrutor.
}

float Debito::getValorDebito() {
    return this->valorDebito;
}

void Debito::setValorDebito(float v) {
    this->valorDebito = v;
}

string Debito::getNomeDebito() {
    return this->nome;
}

void Debito::setNomeDebito(string n) {
    this->nome = n;
}


void Debito::setDebitoAssociado(Saldo& s) {
    float novoSaldo = s.getValor() - this->valorDebito;
    s.setValor(novoSaldo);
}

Debito& Debito::operator=(const Debito& obj) {
    this->nome = obj.nome;
    this->valorDebito = obj.valorDebito;
    this->saldoAssociado = obj.saldoAssociado;
    return *this;
}



