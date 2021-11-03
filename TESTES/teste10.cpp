#include<iostream>
#include<conio.h>

using namespace std;

int main (){
    for (int numero=0; numero < 10; numero++){
        cout << numero << " - ";
        for (int j=0; j<10 ; j++){
            cout << j << "." << numero << " ";
        }
    cout << endl;
    }
    getch();
    return 0;
}