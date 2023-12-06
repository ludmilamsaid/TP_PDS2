#include <iostream>
#include <iostream>
#include <vector>
#include "usuario.h"
#include "projeto.h"
#include "tarefa.h"

int main() {
    // Vector para armazenar atividades (projetos e tarefas)
    std::vector<Atividade*> atividades;

    // Criar um usuário
    Usuario usuario("user1", "user1@example.com", "password");

    // Loop principal
    while (true) {
        // Exibir opções de ação
        std::cout << "Selecione uma ação:" << std::endl;
        std::cout << "1. Criar projeto" << std::endl;
        std::cout << "2. Mostrar projetos" << std::endl;
        std::cout << "3. Criar tarefas" << std::endl;
        std::cout << "4. Mostrar tarefas" << std::endl;
        std::cout << "5. Sair" << std::endl;
        int escolha;
        std::cin >> escolha;
        // Executar ação com base na escolha do usuário
            if (escolha == 1) {
                // Criar um novo projeto
                std::cout << "Digite o título do projeto: ";
                std::string titulo;
                std::cin.ignore();
                getline(std::cin, titulo);
                Projeto* projeto = new Projeto(titulo);
                atividades.push_back(projeto);
                std::cout << "Projeto criado com sucesso!" << std::endl;
            } else if (escolha == 2) {
                // Mostrar detalhes de todos os projetos disponíveis
                std::cout << "Projetos disponíveis:" << std::endl;
                for (size_t i = 0; i < atividades.size(); i++) {
                    atividades[i]->exibirDetalhes();
                }
            } else if (escolha == 3) {
                // Criar uma nova tarefa
                std::cout << "Digite o título da tarefa: ";
                std::string tituloT;
                std::cin.ignore();
                getline(std::cin, tituloT);
                Tarefa* tarefa = new Tarefa(tituloT);
                atividades.push_back(tarefa);
                std::cout << "Tarefa criada com sucesso!" << std::endl;
            }
    }
}