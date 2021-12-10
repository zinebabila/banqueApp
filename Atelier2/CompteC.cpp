#include "CompteC.h"
#include <assert.h>
Banque::CompteC::CompteC(Client*c, Devise*s, Devise*d):Compte(c,s)
{
    assert(*s >= *d);
    this->decouvet = d;
}

bool Banque::CompteC::debiter(Devise* M)
{
   if(this->checkSup(M, this->decouvet))
        return this->Compte::debiter(M);
    return false;
    
}

void Banque::CompteC::crediter(Devise* M)
{
    this->Compte::crediter(M);
}

void Banque::CompteC::consulter() const
{
    this->Compte::consulter();
}
