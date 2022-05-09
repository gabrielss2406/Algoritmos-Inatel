#include <iostream>
#include <iomanip>
using namespace std;

// Funcao que faz calculo e saida da idade requisitada
void calcIdade(int i,int cod){
    float idadeReq;

    switch(cod){ //Calculo + Saida da idade requisitada
        case 1:
            idadeReq = (float) (i*365)/88;
            cout << idadeReq << " anos em mercurio" << endl;
        break;
        case 2:
            idadeReq = (float) (i*365)/225;
            cout << idadeReq << " anos em venus" << endl;
        break;
        case 3:
            idadeReq = (float) i;
            cout << idadeReq << " anos na terra" << endl;
          break;
          case 4:
            idadeReq = (float) (i*365)/687;
            cout << idadeReq << " anos em marte" << endl;
        break;
        case 5:
              idadeReq = (float) (i*365)/4332;
            cout << idadeReq << " anos em jupiter" << endl;
        break;
        case 6:
            idadeReq = (float) (i*365)/10760;
            cout << idadeReq << " anos em saturno" << endl;
        break;
        case 7:
            idadeReq = (float) (i*365)/30681;
            cout << idadeReq << " anos em urano" << endl;
        break;
        case 8:
            idadeReq = (float) (i*365)/60190;
            cout << idadeReq << " anos em netuno" << endl;
        break;
    }
}

int main() {
    
    // Variaveis
        int idadeTerra=0; //Entrada da idade
        int codPlaneta; //código do planeta que ele deseja saber a idade
        float idadeReq; //calculo da idade requisitada

    // Entrada / Verificacao / Saida
    cout << fixed << setprecision(2); //Set casas decimais

    while(idadeTerra!=-1){ //enquanto a idade informada pelo usuário for diferente de -1
        cin >> idadeTerra;
        if(idadeTerra!=-1){
            cin >> codPlaneta;
            calcIdade(idadeTerra,codPlaneta); // Calculo + saida
        }
    }
    
    return 0;
}