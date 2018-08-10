// Questão 4
#include <iostream> // cin, cout, endl
// Função principal
int main()
{
    // Declaração de variaveis
    int n, f = 1, f1 = 1, f2 = 1;
    // Mostra a mensagem pro usuario
    std::cout << "Entre com um valor: " << std::endl;
    // Solicita um numero do usuario
    std::cin >> n;
    // Enquanto a sequencia for menor que n, executa
    while(f < n)
    {
        // Mostra cada numero da sequencia
        std::cout << f << " ";
        // Mostra o numero 1 pela segunda vez
        if(f == 1){
            std::cout << f << " ";
        }
        // f recebe a soma dos dois ultimos numeros
        f = f1+f2;
        // f2 recebe o penultimo numero  
        f2 = f1;
        // f1 recebe o ultimo numero 
        f1 = f;
    }
    // Quebra a linha
    std::cout << std::endl;
    return 0;
}