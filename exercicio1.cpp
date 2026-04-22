#include <iostream>
using namespace std;

int main() {
    string produtos[20];
    float precos[20];

    for(int i = 0; i < 20; i++) {
        cout << "Produto " << i+1 << ": ";
        cin >> produtos[i];
        
        cout << "Preco: ";
        cin >> precos[i];
    }

    string busca;
    cout << "\nDigite o nome do produto: ";
    cin >> busca;

    bool encontrado = false;

    for(int i = 0; i < 20; i++) {
        if(produtos[i] == busca) {
            cout << "Preco de " << produtos[i] 
                 << ": " << precos[i] << " MT\n";
            encontrado = true;
            break;
        }
    }

    if(!encontrado) {
        cout << "Produto nao encontrado.\n";
    }

    return 0;
}
