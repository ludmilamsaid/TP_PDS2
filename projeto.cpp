#include "projeto.h"
#include <iostream>


Projeto::Projeto(const std::string& titulo) : titulo(titulo) {}

void Projeto::criarTarefa(const std::string& titulo, const std::string& descricao, const std::string& data) {
    Tarefa novaTarefa(titulo, descricao, data, this);
    tarefas.push_back(novaTarefa);
}

void Projeto::editarTarefa(int indice, const std::string& titulo, const std::string& descricao, const std::string& data) {
    if (indice >= 0 && indice < tarefas.size()) {
        tarefas[indice].editar(titulo, descricao, data);
    }
}

void Projeto::excluirTarefa(int indice) {
    if (indice >= 0 && indice < tarefas.size()) {
        tarefas.erase(tarefas.begin() + indice);
    }
}

void Projeto::mostrarTarefas() const {
    std::cout << "Tarefas do Projeto '" << titulo << "':" << std::endl;
    for (size_t i = 0; i < tarefas.size(); ++i) {
        std::cout << i + 1 << ". " << tarefas[i].getTitulo() << std::endl;
    }
}
