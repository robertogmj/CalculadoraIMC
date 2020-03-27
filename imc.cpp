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

    if(cimc < 18.5){
        cout << " Abaixo do Peso";
    }else if((cimc >= 18,5) and (cimc <= 24.9)){
        cout << " Peso Normal";
    }else if((cimc >= 25) and (cimc <= 29.9)){
        cout << " Sobrepeso";
    }else{
        cout << " Obesidade";
    }

}
