// Questão 4
#include <iostream> // cin, cout, endl
using namespace std;

// Função principal
int main()
{
    // Declaração de variaveis
    int n, f = 1, f1 = 1, f2 = 1;
    // Mostra a mensagem pro usuario
    cout << "Entre com um valor: " << endl;
    // Solicita um numero do usuario
    cin >> n;
    // Enquanto a sequencia for menor que n, executa
    while(f < n)
    {
        // Mostra cada numero da sequencia
        cout << f << " ";
        // Mostra o numero 1 pela segunda vez
        if(f == 1){
            cout << f << " ";
        }
        // f recebe a soma dos dois ultimos numeros
        f = f1+f2;
        // f2 recebe o penultimo numero  
        f2 = f1;
        // f1 recebe o ultimo numero 
        f1 = f;
    }
    // Quebra a linha
    cout << endl;
    return 0;
}