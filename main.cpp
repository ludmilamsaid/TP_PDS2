#include <iostream>
#include <vector>
#include "projeto.h"


using namespace std;


int main() {
    vector<Projeto> projetos;


    while (true) {
        cout << "Selecione uma ação:" << endl;
        cout << "1. Criar projeto" << endl;
        cout << "2. Mostrar projetos" << endl;
        cout << "3. Sair" << endl;
        int escolha;
        cin >> escolha;


        if (escolha == 1) {
            cout << "Digite o título do projeto: ";
            string titulo;
            cin.ignore();
            getline(cin, titulo);
            projetos.push_back(Projeto(titulo));
            cout << "Projeto criado com sucesso!" << endl;
        }
    }
    
    return 0;
}