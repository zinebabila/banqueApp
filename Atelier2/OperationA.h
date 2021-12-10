#pragma once
#include "Operation.h"
#include <iostream>
using namespace std;
namespace Banque {
    class OperationA :
        public Operation
    {
    public:
        OperationA(Date* d, Devise* montant);
        void afficher() override;

    private:
        string libelle;
    };
}


