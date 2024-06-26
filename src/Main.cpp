#include <iostream>
#include "D:\Arquivos\PROJECT'S\Controlador Financeiro\include\Saldo.h"
#include "D:\Arquivos\PROJECT'S\Controlador Financeiro\include\Debito.h"
#include "D:\Arquivos\PROJECT'S\Controlador Financeiro\include\Credito.h"

using namespace std;

int main() {
    Saldo Pessoa;
    Debito Saida;
    Credito Entrada;
    int menu = 0, select1 = 0, select2 = 0, num = 0;
    float value = 0;
    string nome;

    do {
        cout << "\n" << "---------CONTROLADOR FINANCEIRO---------" << "\n";
        cout << "Administre seus recursos aqui!!!!" << "\n";
        cout << "\n";
        cout << "1. Registrar Debito (Saida)" << "\n";
        cout << "2. Registrar Credito (Entrada)" << "\n";
        cout << "3. Exibir Saldo" << "\n";
        cout << "4. Exibir Extrato" << "\n";
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
            Saida.setNomeDebito(nome);
            Saida.setValorDebito(value);
            Saida.setDebitoAssociado(Pessoa);
            select1++;
            num++;
            break;
        case 2:
            cout << "\n" << "---------REGISTRAR CREDITO---------" << "\n";
            cout << "Digite o nome:\n";
            cin >> nome;
            cout << "\n" << "---------REGISTRAR CREDITO---------" << "\n";
            cout << "Digite o valor a ser registrado:" << "\n";
            cin >> value;
            Entrada.setNomeCredito(nome);
            Entrada.setValorCredito(value);
            Entrada.setCreditoAssociado(Pessoa);
            select2++;
            num++;
            break;
        case 3:
            cout << "\n" << "---------SALDO---------" << "\n";
            Pessoa.extratoSaldo();
            cout << "\n";
            break;
        case 4:
            cout << "\n" << "---------EXTRATO---------" << "\n";
            cout << "\n";
            if (select1 >= 1 || select2 >= 1) {
                cout << "----------Extrato de Debitos----------\n";
                for (int i = 0; i < select1; i++) {
                    cout << Saida.getNomeDebito() << " - " << Saida.getValorDebito() << "\n";
                }

                cout << "\n----------Extrato de Creditos----------\n";
                for (int i = 0; i < select2; i++) {
                    cout << Entrada.getNomeCredito() << " - " << Entrada.getValorCredito() << "\n";
                }
            }
            else {
                cout << "Nenhum registro encontrado.\n";
            }
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
