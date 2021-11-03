#include<iostream>
#include<conio.h>

using namespace std;

int main (){
    int matriz [80] = {1,2,3,4,5,6,7,8,9,10};

    for (int i=0;i<10;i++){
     cout << matriz [i] << endl;
    }

    cout << "o tamanho e " << sizeof(matriz) << endl;
    getch();
    return 0;
} 