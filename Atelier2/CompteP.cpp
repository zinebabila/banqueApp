#include "CompteP.h"
double Banque::CompteP::coutop = 0.05;
Banque::CompteP::CompteP(Client* c, Devise* m):Compte(c, m)
{
}

bool Banque::CompteP::debiter(Devise* M)
{
    M->operator* (1 - CompteP::coutop);
    return Compte::debiter(M);


}

void Banque::CompteP::crediter(Devise* M)
{
    M->operator* (1 + CompteP::coutop);
    Compte::crediter(M);
}

void Banque::CompteP::consulter() const
{
    this->Compte::consulter();
}
