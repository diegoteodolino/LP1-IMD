#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int n;
    cout << "digite um valor " << endl;
    cin >> n;

    switch (n){
        case 1 : cout << "One";
        break;
        case 2 : cout << "Two";
        break;
        case 3 : cout << "Three";
        break;
        case 4 : cout << "Four";
        break;
        case 5 : cout << "Five";
        break;
        
        default:
            cout << "I don't know." << endl;
        break;
    }

    getch();

    return 0;
}