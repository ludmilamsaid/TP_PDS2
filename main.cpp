#include <iostream>
#include <iostream>
#include <vector>
#include "usuario.h"
#include "projeto.h"
#include "tarefa.h"

int main() {
    // Vector para armazenar atividades (projetos e tarefas)
    std::vector<Atividade*> atividades;

    Usuario usuario("user1", "user1@example.com", "password");

    // Loop principal
    while (true) {
        std::cout << "Selecione uma ação:" << std::endl;
        std::cout << "1. Criar projeto" << std::endl;
        std::cout << "2. Mostrar projetos" << std::endl;
        std::cout << "3. Criar tarefas" << std::endl;
        std::cout << "4. Mostrar tarefas" << std::endl;
        std::cout << "5. Sair" << std::endl;
        int escolha;
        std::cin >> escolha;


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
