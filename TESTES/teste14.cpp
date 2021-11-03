#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

struct clientes{
    int cliente_id;
    string nome;
    int idade;
};

int main (){
    clientes meu_cliente[10];
    //meu_cliente[0] = {1, "Diego", 28};

    cout << "Digite o codigo do cliente: " << endl;
    cin >>meu_cliente[0].cliente_id;
    cout << "Digite o nome do cliente: " << endl;
    cin >> meu_cliente[0].nome;
    cout << "Digite a idade do cliente: " << endl;
    cin >> meu_cliente[0].idade;


    cout << "ID do cliente " << meu_cliente[0].cliente_id << endl;
    cout << "Nome do Cliente " << meu_cliente[0].nome << endl;
    cout << "Idade do Cliente " << meu_cliente[0].idade <<endl;

    getch();
    return 0;
}