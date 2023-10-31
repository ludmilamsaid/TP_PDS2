#include "tarefa.h"
#include "projeto.h"

Tarefa::Tarefa(const std::string& titulo, const std::string& descricao, const std::string& data, Projeto* projeto)
    : titulo(titulo), descricao(descricao), data(data), projeto(projeto) {}

void Tarefa::editar(const std::string& novoTitulo, const std::string& novaDescricao, const std::string& novaData) {
    titulo = novoTitulo;
    descricao = novaDescricao;
    data = novaData;
}

void Tarefa::excluir() {
    // Remover a tarefa do projeto (não implementado neste exemplo)
}

std::string Tarefa::getTitulo() const {
    return titulo;
}

