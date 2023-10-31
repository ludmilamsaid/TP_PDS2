#ifndef USUARIO_H
#define USUARIO_H

using std::string;

class Usuario {

    public:

        Usuario(string username, string email, string senha);
        
        string getUsername() const;
        string getEmail() const;
        string getSenha() const;

        void exibeInfos() const;

    private:
    string username;
    string email;
    string senha;

};

#endif