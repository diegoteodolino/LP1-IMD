#include<iostream>
#include <conio.h>

using namespace std;

int main (){
    int A, B, C;
    cout << "Entre com o valor de A: "<<endl;
    cin >> A;
    cout << "Entre com o valor de B:" << endl;
    cin >> B;

    C = A;
    A = B;
    B = C;   

    cout << "O valor de A é " << A << endl;
    cout << "O valor de B é " << B << endl;

    getch();
    return 0;
}