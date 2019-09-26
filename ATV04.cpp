#include <iostream>
#include <vector>
using namespace std;

double CONVERTE_MOEDA(double valor,double moeda);

int main (){

    double valor;
    double moeda;
    char nomeMoeda;

    cout << "Qual é a moeda(E - Euro; D - Dolár): ";
    cin >> nomeMoeda;
    cout << "digite o valor em real que deseja ser convertido" << endl;
    cin >> valor;
    cout << "qual o valor da moeda que voce deseja converter?" << endl;
    cin >> moeda;

    if(nomeMoeda == 'E'){
        cout << "VALOR CONVERTIDO = € " << CONVERTE_MOEDA(valor, moeda);
    }else {
        cout << "VALOR CONVERTIDO = U$ " << CONVERTE_MOEDA(valor, moeda);
    }

}

double CONVERTE_MOEDA(double valor,double moeda){

    return valor / moeda ;

}
