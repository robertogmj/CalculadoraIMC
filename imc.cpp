#include <iostream>
using namespace std;

int main(){
 //declaracao variaveis
    int kg;
    double a,cimc;

    cout << "Entre com o seu peso em quilos? ";
    cin >> kg;

    cout << "Entre com a sua altura em metros e centimetros(1.80) ";
    cin >> a;

    cimc = kg / (a * a);

    cout << "O seu IMC é de: " << cimc;

}
