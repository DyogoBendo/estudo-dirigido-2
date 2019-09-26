#include <iostream>

using namespace std;

int set_crime (string culpado);

int main(){

    int reu[5], resultado = 0;
    string resposta;

    cout << "Telefonou para a vítima?" << endl;
    cin >> resposta;
    reu[0] = set_crime(resposta);

    cout << "Esteve no local do crime?" << endl;
    cin >> resposta;
    reu[1] = set_crime(resposta);

    cout << "Mora perto da vítima?" << endl;
    cin >> resposta;
    reu[2] = set_crime(resposta);

    cout << "Devia para a vítima?" << endl;
    cin >> resposta;
    reu[3] = set_crime(resposta);

    cout << "Já trabalhou com a vítima?" << endl;
    cin >> resposta;
    reu [4] = set_crime(resposta);

    for (int participacao : reu)
    {
        resultado = participacao + resultado;
    }

    if (resultado < 2)
    {
        cout << "Inocente";
    }
    else if (resultado == 2)
    {
        cout << "Suspeita";
    }
    else if (resultado > 2 && resultado < 5)
    {
        cout << "Cumplice";
    }
    else if (resultado == 5)
    {
        cout << "Assassino";
    }

return 0;
}

int set_crime (string culpado)
{

    if (culpado == "Sim")
    {
        return 1;

    }
    else if ( culpado == "Nao")
    {
        return 0;
    }
    else
    {
    cout << "Digite uma valor valido (Sim ou Nao): ";
    cin >> culpado;
    set_crime(culpado);
    }
}
