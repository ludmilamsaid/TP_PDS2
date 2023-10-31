# TP_PDS2
# Sistema de Gerenciamento de Projetos - Spock
## Apresentação do Projeto: 
## Visão Geral da Solução:
## Estrutura do Projeto:
## Funcionalidades:
- O sistema deve ser capaz de adicionar um novo usuário e permitir que ele consiga logar a partir do email e senha
- O usuário pode criar um novo projeto e adicionar tarefas a serem feitas nesse projeto

Classe Projetos()
- Atributos
    titulo (string): titulo do projeto
    tasks (vector<task>): tarefas dentro do projeto
    numero (int): numero para identificação do projeto

- Métodos
	criarProjeto()
	excluirProjeto()
	editarProjeto()

Classe Tarefas()
- Atributos
	título (string): titulo da tarefa
	descrição (string): descrição detalhada da tarefa
    numero_tarefa (int): numero para identificação da tarefa
	Data (Data): Data de vencimento da tarefa
    projeto(Projeto): Projeto ao qual a tarefa pertence
	
- Métodos
    criarTarefa(): permite que o usuário adicione uma nova tarefa
    excluirTarefa(): permite que o usuário exclua uma tarefa
    editarTarefa():  permite que o usuário 

Classe Usuário()
- Atributos
	Login
	Senha
	Email
	Tarefas (vector<task>): tarefas associado ao usuário
    Projetos (vector<Project>): projetos associados ao usuário
	
- Métodos
	criarUsuario(): permite que novos usuário sejam registrados no sistema
	excluirUsuário(): permite a exclusão
	login(): permite que usuário faça login no sistema com o nome e a senha


## Pré-Requisitos:
Compilador C++
Sistema Operacional compatível com C++

## Instruções de instalação:
- Clone o repositório: ``
- Navegue até o diretório do projeto: cd TP-pds2
- compile o código-fonte: `g++ -o gerenciador-tarefas main.cpp`
- Execute o programa: `/.gerenciador-tarefas`

## Instruções de Uso:
## Principais Dificuldades:
