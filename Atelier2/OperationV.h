#pragma once
#include "Operation.h"
namespace Banque {
class OperationV :
    public Operation
{
public:
    OperationV(Devise* d,Date*c);
    void afficher() override;

private:
     string libelle;
    
};
}
