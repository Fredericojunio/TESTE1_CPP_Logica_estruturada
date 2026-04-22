#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomes[15];
    float medias[15];
    int aprovados = 0;

    // Entrada de dados
    cout << "=== Cadastro de Alunos ===" << endl;
    for(int i = 0; i < 15; i++) {
        cout << "Aluno " << i + 1 << endl;
        cout << "Nome: ";
        cin >> nomes[i];
        cout << "Media final: ";
        cin >> medias[i];
    }

    // Listar alunos aprovados
    cout << "\n=== Alunos Aprovados ===" << endl;
    for(int i = 0; i < 15; i++) {
        if(medias[i] >= 10) {
            cout << nomes[i] << endl;
            aprovados++;
        }
    }

    // Cálculo da percentagem de aprovação
    float percentagem = (aprovados / 15.0) * 100;

    cout << "\nPercentagem de aprovacao: " << percentagem << "%" << endl;

    return 0;
}
