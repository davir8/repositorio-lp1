// Questão 1
#include <iostream> // cin, cout, endl
// Função principal
int main()
{
    // Declaração de variaveis
    int qtdnegativos = 0, num;

    for(auto i(0u); i<5; ++i){
        // Mostra mensagem pro usuario digitar
        std::cout << "Digite um número: \n";
        // Faz leitura do numero
        std::cin >> num;
        // Verifica se o numero digitado é negativo
        if (num < 0){
            // Soma 1 na quantidade
            qtdnegativos++;
        }
    }
    // Mostra quantos numeros negativos foram lidos
    std::cout << "Quantidade de negativos: " << qtdnegativos << std::endl;
}