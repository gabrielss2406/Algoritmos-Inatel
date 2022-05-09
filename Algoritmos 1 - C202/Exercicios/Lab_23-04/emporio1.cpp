#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    // Variaveis
        int codigo;
        float preco;
        char nome[100];
        char cidade[100];
        int idade;
        float pagamento;

        float troco;

    // Entrada
        cin >> codigo;
        cin >> preco;
        cin.ignore();
        cin.getline(nome, 100);
        cin.ignore();
        cin.getline(cidade, 100);
        cin >> idade;
        cin >> pagamento;

    // Verificacao / Saida
        switch(codigo){
            case 1:
                cout << "Queijo" << endl;
            break;
            case 2:
                cout << "Geleia" << endl;
            break;
            case 3:
                cout << "Doce" << endl;
            break;
            case 4:
                cout << "Refrigerante" << endl;
            break;
            case 5:
                cout << "Sorvete" << endl;
            break;
            case 6:
                cout << "Presunto cru" << endl;
            break;
            case 7:
                cout << "Vinho" << endl;
            break;
        }

    // Calculo
        troco = pagamento - preco;

    // Saida
        cout << fixed << setprecision(2);
        cout << "Valor total = " << preco << endl;
        cout << "Troco = " << troco << endl;

    return 0;
}