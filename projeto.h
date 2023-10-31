#ifndef PROJETO_H
#define PROJETO_H

#include <string>
#include <vector>
#include "tarefa.h"

class Projeto {
public:
    Projeto(const std::string& titulo);
    void criarTarefa(const std::string& titulo, const std::string& descricao, const std::string& data);
    void editarTarefa(int i, const std::string& titulo, const std::string& descricao, const std::string& data);
    void excluirTarefa(int i);
    void mostrarTarefas() const;

private:
    std::string titulo;
    std::vector<Tarefa> tarefas;
};

#endif
