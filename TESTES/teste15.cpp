#include<iostream>
#include <conio.h>

using namespace std;

template<class TIPODADO>
TIPODADO funcao (TIPODADO a);

int main (){

    
    cout << funcao(3.15) <<"\n";
    cout << funcao(10)<< "\n";
    cout << funcao(21312432525235.12312314134) << "\n";
    getch();
    return 0;
}

template <class TIPODADO>
TIPODADO funcao (TIPODADO a){
    return a+1;
}