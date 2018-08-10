// Questão 2
#include <iostream> // cin, cout, endl
// Função principal
int main()
{
    // Declaração de variaveis
    int i1 = 0, i2 = 0, i3 = 0, i4 = 0, total = 0, num;
    // Mostra a mensagem pro usuario
    std::cout << "Entre com valores inteiros (Ctrl+d p/ encerrar): " << std::endl;
    // Enquanto o usuario nao apertar o crtl+d ler numeros
    while (std::cin >> num)
    {
        if(num >= 0 && num < 25){
            i1++;
        }else if(num >= 25 && num < 50){
            i2++;
        }else if(num >= 50 && num < 75){
            i3++;
        }else if(num >= 75 && num <= 100){
            i4++;
        }
        // Salvar o total de numeros digitados
        total++;        
    }
    // Exibir a porcentagem para os intervalos solicitados.
    std::cout << "[0, 25): " << (i1*100)/(float)total << "%" <<
                "\n[25, 50): " << (i2*100)/(float)total << "%" <<
                "\n[50, 75): " << (i3*100)/(float)total << "%" <<
                "\n[75, 100]: " << (i4*100)/(float)total << "%" << std::endl;
}