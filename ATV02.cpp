#include <iostream>

using namespace std;

int calculateSum(int n1, int n2);

int main(){

    int n1, n2, sum;

    cout << "Informe um numero: ";
    cin >> n1;
    cout << "Informe outro número: ";
    cin >> n2;

    sum = calculateSum(n1, n2);
    cout << "SOMA = " << sum << endl;

    return 0;
}
int calculateSum(int n1, int n2){

    return n1 + n2;
}
