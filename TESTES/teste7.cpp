#include <iostream>

using namespace std;

int main (){
    int a,b;
    int adicao,subtracao,multiplicacao;
    float divisao, resto;
    a=5;
    b=2;

    adicao = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a/b;
    resto = a % b;

    cout << "A soma dos numeros e " << adicao << endl;
    cout << "A subtracao dos numeros e "<< subtracao << endl;
    cout << "A multiplicacao dos numeros e "<< multiplicacao << endl;
    cout << "A divisao dos numeros e " << divisao << endl;
    cout << "O resto da divisão é " << resto << endl;
    return 0;
}