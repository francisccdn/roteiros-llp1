#pragma once
#include <iostream>
#include <exception>

class FuncionarioNaoExisteException : public std::exception
{
public:
    const char * what () const throw ()
    {
        return "Não existe nenhum funcionario com esse nome.";
    }
};