#include <iostream>
using namespace std;

int main() {
    string nomes[8];
    float tempos[8];

    for(int i = 0; i < 8; i++) {
        cout << "\nAtleta " << i+1 << endl;
        cout << "Nome: ";
        cin >> nomes[i];
        
        cout << "Tempo (segundos): ";
        cin >> tempos[i];
    }

    // Bubble Sort
    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 7 - i; j++) {
            if(tempos[j] > tempos[j+1]) {
                // trocar tempos
                float temp = tempos[j];
                tempos[j] = tempos[j+1];
                tempos[j+1] = temp;

                // trocar nomes (paralelo)
                string tempNome = nomes[j];
                nomes[j] = nomes[j+1];
                nomes[j+1] = tempNome;
            }
        }
    }

    cout << "\n--- Classificacao ---\n";
    for(int i = 0; i < 8; i++) {
        cout << i+1 << "º - " << nomes[i] 
             << ": " << tempos[i] << " s\n";
    }

    return 0;
}
