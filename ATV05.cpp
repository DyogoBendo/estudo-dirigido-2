#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool check(string palindromo);

int main(){

    string palindromo;

    cout << "Informe a palavra: ";
    cin >> palindromo;

    if(check(palindromo) == true){
        cout << endl << "É um palindromo";
    }
    else {
        cout << endl << "Não é um palindromo";
    }

    return 0;
}
bool check(string palindromo){

    string palindromoReverse = palindromo;

    reverse(palindromo.begin(), palindromo.end());

    if(palindromo == palindromoReverse){
        return true;
    }
    else {
        return false;
    }

}
