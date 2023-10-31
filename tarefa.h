#ifndef TAREFA_H
#define TAREFA_H

#include <string>

class Projeto;  // Declarando a classe Projeto para evitar dependências circulares

class Tarefa {
public:
    Tarefa(const std::string& titulo, const std::string& descricao, const std::string& data, Projeto* projeto);
    void editar(const std::string& titulo, const std::string& descricao, const std::string& data);
    void excluir();
    std::string getTitulo() const;  // Método para acessar o título da tarefa

private:
    std::string titulo;
    std::string descricao;
    std::string data;
    Projeto* projeto;  // Referência ao projeto ao qual a tarefa pertence
};

#endif
