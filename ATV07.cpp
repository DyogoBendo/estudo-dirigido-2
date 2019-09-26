#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <vector>

using namespace std;

void minusculo (string palavra)
{
    for (char teste : palavra)
    {
        teste = tolower(teste);
        cout << teste;
    }
}

int main()
{
string word;
cin >> word;
minusculo (word);

}
