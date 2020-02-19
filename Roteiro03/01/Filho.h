#pragma once

#include "Pai.h"

class Filho : public Pai
{
public:
    void foo()
    {
        std::cout << "Classe Filho" << std::endl;
    }
};