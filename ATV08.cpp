#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>

using namespace std;

bool verificarA(int a);
double calcularDelta(int a, int b, int c);
bool verificarDelta(int delta);
double calcularX1(int delta, int b, int a, int c);
double calcularX2(int delta, int b, int a, int c);


int main(){

    cout << setw(25) << "ALGORITMO PARA CARCULAR BHASKARA" << endl << endl;

    int a, b, c;
    double delta;
    cout << "Informe o A da equação do 2º Grau: ";
    do{
        cin >> a;
    }while(!verificarA(a));
    cout << "Informe o B da equação do 2º Grau: ";
    cin >> b;
    cout << "Informe o C da equação do 2º Grau: ";
    cin >> c;
    cout << endl;

    delta = calcularDelta(a,b,c);

    cout << "X1 = " << calcularX1(delta, b, a, c) << endl;
    cout << "X2 =" << calcularX2(delta, b, a, c) << endl;

    return 0;
}
bool verificarA(int a){
    if(a == 0){
        cout << "A não pode ser igual a 0. Por favor digite outro numero: ";
        return false;
    }
    return true;
}
double calcularDelta(int a, int b, int c){

    int delta;
    delta = (b*b) - 4*a*c;

    if(!verificarDelta(delta)){
        cout << "ERROR: não é possível realizar essa operação, pois não existe razi quadrada de um numero negativo" << endl;
        exit(0);
    }
    return sqrt(delta);
}
bool verificarDelta(int delta){

    if(delta < 0){
        return false;
    }
    else {
        return true;
    }
}
double calcularX1(int delta, int b, int a, int c){

    int x1 = 0;

    x1 = (-b + (delta))/2*a;

    return x1;
}
double calcularX2(int delta, int b, int a, int c){

    int x2 = 0;
    x2 = (-b - (delta))/2*a;

    return x2;
}
