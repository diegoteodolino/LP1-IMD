#include<iostream>
#include<conio.h>

using namespace std;

int main (){
    int numero = 5;
    int *ponteiro;

    ponteiro = &numero;

    
    cout << "Valor da variavel numero " << numero << endl;
    cout << "Posicao de memoria da variavel numero " << &numero << endl;
    cout << "Ponteiro " << *ponteiro << endl;

    getch();
    return 0;
}