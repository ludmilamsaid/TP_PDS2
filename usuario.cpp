#include "usuario.h"
#include <iostream>

using namespace std;

Usuario::Usuario(string novoUsername, string novoEmail, string novaSenha) {
    nome = novoUsername;
    email = novoEmail;
    senha = novaSenha;
}

string Usuario::getUsername() const {
    return username;
}

string Usuario::getEmail() const {
    return email;
}

string Usuario::getSenha() const {
    return senha;
}

void Usuario::exibeInfos() const {
    cout << "Username: " << username << endl;
    cout << "E-mail: " << email << endl;
}