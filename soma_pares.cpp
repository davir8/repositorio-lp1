// Questão 3
#include <iostream> // cin, cout, endl
using namespace std;

// Função principal
int main()
{
    // Declaração de variaveis
    int num, qtd, soma = 0;
    // Mostra a mensagem pro usuario
    cout << "Entre com valores inteiros (Ctrl+d p/ encerrar): " << endl;
    // Enquanto o usuario nao apertar o crtl+d ler numeros
    while (cin >> num >> qtd)
    {
        for (int i(0u); i < qtd; i++)
        {
            soma += num+i;
        }
        // Mostra a soma dos qtd inteiros a partir de num 
        cout << soma << endl;
        soma = 0;
    }
}