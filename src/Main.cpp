#include <iostream>
#include "D:\Arquivos\PROJECT'S\Controlador Financeiro\include\Saldo.h"
#include "D:\Arquivos\PROJECT'S\Controlador Financeiro\include\Debito.h"

using namespace std;

int main() {
    Saldo Pessoa;
    Debito Valor;
    int menu = 0, value = 0;
    string nome;

    do {
        cout << "---------CONTROLADOR FINANCEIRO---------" << "\n";
        cout << "Administre seus recursos aqui!!!!" << "\n";
        cout << "\n";
        cout << "1. Registrar Debito" << "\n";
        cout << "2. Registrar Credito" << "\n";
        cout << "3. Exibir Saldo" << "\n";
        cout << "0. Sair" << "\n";
        cout << "\n";
        cout << "Escolha um: ";
        cin >> menu;

        switch (menu) {
        case 1:
            cout << "\n" << "---------REGISTRAR DEBITO---------" << "\n";
            cout << "Digite o nome:\n";
            cin >> nome;
            cout << "\n" << "---------REGISTRAR DEBITO---------" << "\n";
            cout << "Digite o valor a ser registrado:" << "\n";
            cin >> value;
            Valor.setValorDebito(value);
            Valor.setDebitoAssociado(Pessoa);
            break;
        case 2:
            cout << "\n" << "---------REGISTRAR CREDITO---------" << "\n";
            // 
            break;
        case 3:
            cout << "\n" << "---------EXIBIR EXTRATO---------" << "\n";
            Pessoa.extratoSaldo();
            cout << "\n";
            break;
        case 0:
            cout << "Saindo do Controlador Financeiro..." << "\n";
            break;
        default:
            cout << "Opção inválida. Por favor, escolha uma opção válida." << "\n";
            break;
        }

    } while (menu != 0);

    return 0;
}
