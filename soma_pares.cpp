// Questão 3
#include <iostream> // cin, cout, endl
// Função principal
int main()
{
    // Declaração de variaveis
    int num, qtd, soma = 0;
    // Mostra a mensagem pro usuario
    std::cout << "Entre com valores inteiros (Ctrl+d p/ encerrar): " << std::endl;
    // Enquanto o usuario nao apertar o crtl+d ler numeros
    while (std::cin >> num >> qtd)
    {
        for (int i(0u); i < qtd; i++)
        {
            soma += num+i;
        }
        // Mostra a soma dos qtd inteiros a partir de num 
        std::cout << soma << std::endl;
        soma = 0;
    }
}