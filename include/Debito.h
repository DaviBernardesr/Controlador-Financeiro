#ifndef DEBITO_H
#define DEBITO_H

#include "Saldo.h"

class Debito{
    public:
        Debito();
        Debito(string, float);
        Debito(const Debito&);
        ~Debito();
        float getValorDebito();
        void setValorDebito(float);
        string getNomeDebito();
        void setNomeDebito(string);
        void setDebitoAssociado(Saldo&);
        Debito& operator=(const Debito&);

    private:
        string nome;
        float valorDebito;
        Saldo saldoAssociado;
};

#endif