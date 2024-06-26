1. main.cpp
Propósito:
O arquivo main.cpp contém a função main que implementa um controlador financeiro simples em linha de comando. Ele permite ao usuário registrar débitos, créditos, verificar o saldo, exibir extratos e sair do programa usando as classes Saldo, Debito e Credito.

Funcionalidade Principal:
Exibe um menu interativo para:

Registrar débito
Registrar crédito
Exibir saldo
Exibir extrato
Sair do programa
Utiliza as classes:

Saldo: Para armazenar e manipular informações financeiras.
Debito: Para representar e registrar transações de débito.
Credito: Para representar e registrar transações de crédito.
2. Saldo.h
Propósito:
O arquivo Saldo.h define a classe Saldo, que representa o saldo financeiro de uma pessoa.

Métodos Principais:

Saldo(): Construtor padrão.
Saldo(float): Construtor com parâmetro inicial de saldo.
Saldo(const Saldo&): Construtor de cópia.
~Saldo(): Destrutor.
float getValor() const: Retorna o valor atual do saldo.
void setValor(float): Define o valor do saldo.
void extratoSaldo() const: Imprime o saldo atual.
void extratoCompleto() const: Imprime um extrato detalhado com todas as transações (créditos e débitos).
Saldo& operator=(const Saldo&): Sobrecarga do operador de atribuição.
3. Saldo.cpp
Propósito:
O arquivo Saldo.cpp contém a implementação dos métodos da classe Saldo.

Detalhes:

Implementa os métodos declarados em Saldo.h.
Gerencia o valor do saldo e fornece métodos para acessá-lo e modificá-lo.
4. Debito.h
Propósito:
O arquivo Debito.h define a classe Debito, que representa uma transação de débito associada a um saldo.

Métodos Principais:

Debito(): Construtor padrão.
Debito(string, float): Construtor com parâmetros para nome e valor do débito.
Debito(const Debito&): Construtor de cópia.
~Debito(): Destrutor.
float getValorDebito() const: Retorna o valor do débito.
void setValorDebito(float): Define o valor do débito.
string getNome() const: Retorna o nome associado ao débito.
void setNome(const string&): Define o nome associado ao débito.
const Saldo& getDebitoAssociado() const: Retorna o objeto Saldo associado ao débito.
void setDebitoAssociado(const Saldo&): Define o objeto Saldo associado ao débito.
Debito& operator=(const Debito&): Sobrecarga do operador de atribuição.
5. Debito.cpp
Propósito:
O arquivo Debito.cpp contém a implementação dos métodos da classe Debito.

Detalhes:

Implementa os métodos declarados em Debito.h.
Gerencia o valor e o nome do débito, assim como o objeto Saldo associado a ele.
6. Credito.h
Propósito:
O arquivo Credito.h define a classe Credito, que representa uma transação de crédito associada a um saldo.

Métodos Principais:

Credito(): Construtor padrão.
Credito(string, float): Construtor com parâmetros para nome e valor do crédito.
Credito(const Credito&): Construtor de cópia.
~Credito(): Destrutor.
float getValorCredito() const: Retorna o valor do crédito.
void setValorCredito(float): Define o valor do crédito.
string getNome() const: Retorna o nome associado ao crédito.
void setNome(const string&): Define o nome associado ao crédito.
const Saldo& getCreditoAssociado() const: Retorna o objeto Saldo associado ao crédito.
void setCreditoAssociado(const Saldo&): Define o objeto Saldo associado ao crédito.
Credito& operator=(const Credito&): Sobrecarga do operador de atribuição.
7. Credito.cpp
Propósito:
O arquivo Credito.cpp contém a implementação dos métodos da classe Credito.

Detalhes:

Implementa os métodos declarados em Credito.h.
Gerencia o valor e o nome do crédito, assim como o objeto Saldo associado a ele.
Organização do Projeto:
O projeto está estruturado para facilitar a manutenção e o desenvolvimento futuro, separando a lógica de negócios (Saldo, Debito e Credito) dos aspectos de interação com o usuário (main.cpp). Cada classe (Saldo, Debito e Credito) é responsável por gerenciar suas próprias operações e interações com o saldo financeiro.