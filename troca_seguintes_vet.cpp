// Questão 6
#include <iostream> // cin, cout, endl
// Função principal
int main()
{
    // Declaração de variaveis
    int B[20], aux;

    // Recebendo os valores pro vetor
    std::cout << "Entre com 20 números: \n";
    for(auto i(0u); i<20; ++i) {
        // Faz leitura dos numeros
        std::cin >> B[i];
    }
    
    // Imprimindo os valores do vetor
    std::cout << "Vetor = [ ";
    for(auto i(0u); i<20; ++i) {
        std::cout << B[i] << " ";
    }
    std::cout << "]\n";

    // Trocando posicao dos elementos impar com par do vetor
    for(auto i(0u); i<20; ++i) {
        if (B[i] % 2 != 0 && i <19) {
            aux = B[i];
            B[i] = B[i+1];
            B[i+1] = aux;
        }
    }

    // Imprimindo os valores do vetor
    std::cout << "Vetor = [ ";
    for(auto i(0u); i<20; ++i) {
        std::cout << B[i] << " ";
    }
    std::cout << "]\n";

    return 0;
}