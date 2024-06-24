#include "D:\Arquivos\PROJECT'S\Controlador Financeiro\include\Saldo.h"
#include <iostream>

using namespace std;

Saldo::Saldo(){
    this->valor = 0;
}

Saldo::Saldo(float s){
    this->valor = s;
}

Saldo::Saldo(const Saldo& obj){
    this->valor = obj.valor;
}

Saldo::~Saldo() {
    // Destrutor.
}

void Saldo::setValor(float s) {
    this->valor = s;
}

float Saldo::getValor(){
    return this->valor;
}

Saldo& Saldo::operator=(const Saldo& obj){
    this->valor = obj.valor;
    return *this;
}

void Saldo::extratoSaldo(){
    cout << "Saldo Atual no momento: " << getValor() << ".";
}
