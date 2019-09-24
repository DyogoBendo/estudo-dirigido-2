#include <iostream>

using namespace std;

void printNumbers();

int main(){

    printNumbers();

    return 0;
}

void printNumbers(){

    cout << "Imprimindo... "<< endl;

    for(int i=0; i<101; i++){
        cout << i << endl;
    }

}
