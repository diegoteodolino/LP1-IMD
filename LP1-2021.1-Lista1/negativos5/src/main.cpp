#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int x[SIZE], j;
    cout << "Digite 5 valores inteiros: " << "\n";
    for (int i=0;i<SIZE;i++){
        cin >> x[i];
        if (x[i]<0){
            j++;
        }
    }
    cout << j << "\n";
    return 0;
}