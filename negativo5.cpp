// Questão 1
#include <iostream> // cin, cout, endl
using namespace std;

// Função principal
int main()
{
    // Declaração de variaveis
    int qtdnegativos = 0, num;

    for(auto i(0u); i<5; ++i){
        // Mostra mensagem pro usuario digitar
        cout << "Digite um número: \n";
        // Faz leitura do numero
        cin >> num;
        // Verifica se o numero digitado é negativo
        if (num < 0){
            // Soma 1 na quantidade
            qtdnegativos++;
        }
    }
    // Mostra quantos numeros negativos foram lidos
    cout << "Quantidade de negativos: " << qtdnegativos << endl;
}