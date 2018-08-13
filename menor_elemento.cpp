// Questão 5
#include <iostream> // cin, cout, endl
// Função principal
int main()
{
    // Declaração de variaveis
    float Vet[20], menor, posicao;

    // Recebendo os valores pro vetor
    std::cout << "Entre com 20 números: \n";
    for(auto i(0u); i<20; ++i) {
        std::cin >> Vet[i];
    }
    
    // Imprimindo os valores do vetor
    std::cout << "Vetor = [ ";
    for(auto i(0u); i<20; ++i) {
        std::cout << Vet[i] << " ";
    }
    std::cout << "]\n";

    // Procurando o menor elemento do vetor
    menor = Vet[0];
    posicao = 0;
    for(auto i(0u); i<20; ++i) {
        if (Vet[i] < menor) {
            menor = Vet[i];
            posicao = i;
        }
    }
    // Imprimindo o menor elemento do vetor
    std::cout << "Menor elemento: " << menor
    << "\nPosição: " << posicao << std::endl;

    return 0;
}