// Questão 8
#include <iostream> // cin, cout, endl
#include <vector>
#include <iterator>

// Função filter
int * filter(int * first, int * last)
{
    int * work = first;
    // Salvar a posicao inicial do vetor
    int * new_last = first;
    
    while(work < last)
    {
        // Se se for positivo, salva o valor na primeira posicao
        if (*work > 0)
        {            
            *new_last = *work;
            // Pula pra outra posicao
            new_last++;
        }
        // Se nao for, pula pro proximo valor
        work++;
    }
    return new_last;
}

// Função principal
int main()
{
    // Declaração de variaveis
    int Vet[20];

    // Recebendo os valores pro vetor
    std::cout << "Entre com 20 números: \n";
    for(auto i(0); i<20; ++i) 
    {
        std::cin >> Vet[i];
    }
    
    // Imprimindo os valores do vetor
    std::cout << "Vetor = [ ";
    for(auto i(0); i<20; ++i) 
    {
        std::cout << Vet[i] << " ";
    }
    std::cout << "]\n";

    // Filtrando o vetor
    auto last = filter(Vet, Vet+20);
    // Novo tamanho do vetor
    int len = last-Vet;

    // Imprimindo o vetor filtrado
    std::cout << "Vetor = [ ";
    for(int i(0); i<len; ++i) 
    {
        std::cout << Vet[i] << " ";
    }
    std::cout << "]\n";

    return 0;
}