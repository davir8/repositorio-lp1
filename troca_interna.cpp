// Questão 6
#include <iostream> // cin, cout, endl
// Função principal
int main()
{
    // Declaração de variaveis
    int A[20], aux;

    // Recebendo os valores pro vetor
    std::cout << "Entre com 20 números: \n";
    for(auto i(0u); i<20; ++i) {
        // Faz leitura dos numeros
        std::cin >> A[i];
    }
    
    // Imprimindo os valores do vetor
    std::cout << "Vetor = [ ";
    for(auto i(0u); i<20; ++i) {
        std::cout << A[i] << " ";
    }
    std::cout << "]\n";

    // Trocando posicao dos elementos do vetor
    for(auto i(0u); i<10; ++i) {
        aux = A[i];
        A[i] = A[19-i];
        A[19-i] = aux;
    }

    // Imprimindo os valores do vetor
    std::cout << "Vetor = [ ";
    for(auto i(0u); i<20; ++i) {
        std::cout << A[i] << " ";
    }
    std::cout << "]\n";

    return 0;
}