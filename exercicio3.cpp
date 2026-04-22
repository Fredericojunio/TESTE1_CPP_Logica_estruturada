#include <iostream>
using namespace std;

int main() {
    string nomes[5];
    float precos[5];
    int quantidades[5];
    float subtotais[5];
    
    float total = 0;

    for(int i = 0; i < 5; i++) {
        cout << "\nItem " << i+1 << endl;
        cout << "Nome do item: ";
        cin >> nomes[i];
        
        cout << "Preco unitario: ";
        cin >> precos[i];
        
        cout << "Quantidade: ";
        cin >> quantidades[i];
        
        subtotais[i] = precos[i] * quantidades[i];
        total += subtotais[i];
    }

    float desconto = 0;
    if(total > 1000) {
        desconto = total * 0.10;
        total -= desconto;
    }

    cout << "\n--- Fatura ---\n";
    for(int i = 0; i < 5; i++) {
        cout << nomes[i] << ": " 
             << quantidades[i] << " x " 
             << precos[i] << " = " 
             << subtotais[i] << " MT\n";
    }

    cout << "\nTotal sem desconto: " << total + desconto << " MT";
    cout << "\nDesconto: " << desconto << " MT";
    cout << "\nTotal a pagar: " << total << " MT\n";

    return 0;
}
