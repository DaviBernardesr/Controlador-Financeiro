1. main.cpp
Propósito:
O arquivo main.cpp contém a função main que implementa um controlador financeiro simples em linha de comando. Ele permite ao usuário registrar débitos, créditos e verificar o saldo usando as classes Saldo e Debito.

Funcionalidade Principal:
Exibe um menu interativo para:
Registrar débito
Registrar crédito (ainda não implementado)
Exibir saldo
Sair do programa
Utiliza as classes Saldo e Debito para armazenar e manipular informações financeiras.
2. Saldo.h
Propósito:
O arquivo Saldo.h define a classe Saldo, que representa o saldo financeiro de uma pessoa.

Métodos Principais:
Saldo(): Construtor padrão.
Saldo(float): Construtor com parâmetro inicial de saldo.
Saldo(const Saldo&): Construtor de cópia.
~Saldo(): Destrutor.
float getValor(): Retorna o valor atual do saldo.
void setValor(const float): Define o valor do saldo.
Saldo& operator=(const Saldo&): Sobrecarga do operador de atribuição.
void extratoSaldo(): Imprime o saldo atual.
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
float getValorDebito(): Retorna o valor do débito.
void setValorDebito(float): Define o valor do débito.
string getNome(): Retorna o nome associado ao débito.
void setNome(string): Define o nome associado ao débito.
Saldo getDebitoAssociado(): Retorna o objeto Saldo associado ao débito.
void setDebitoAssociado(Saldo&): Define o objeto Saldo associado ao débito.
Debito& operator=(const Debito&): Sobrecarga do operador de atribuição.
5. Debito.cpp
Propósito:
O arquivo Debito.cpp contém a implementação dos métodos da classe Debito.

Detalhes:
Implementa os métodos declarados em Debito.h.
Gerencia o valor e o nome do débito, assim como o objeto Saldo associado a ele.
Considerações Finais:
Organização do Projeto: O projeto está estruturado para facilitar a manutenção e o desenvolvimento futuro, separando a lógica de negócios (Saldo e Debito) dos aspectos de interação com o usuário (main.cpp).
Documentação Adicional: Adicione comentários adicionais nos arquivos .cpp conforme necessário para explicar decisões de implementação ou detalhes específicos do código.
Esta documentação fornece uma visão geral do projeto e de seus componentes principais. Certifique-se de manter a documentação atualizada à medida que o projeto evolui e novas funcionalidades são adicionadas.