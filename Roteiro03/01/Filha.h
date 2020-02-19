#pragma once

#include "Pai.h"

class Filha : public Pai
{
public:
    void foo()
    {
        std::cout << "Classe Filha" << std::endl;
    }
};