#include "CompteE.h"
#include <assert.h>
Banque::CompteE::CompteE(Client* c, Devise* d, double taux):Compte(c,d)
{
	assert(taux > 0 && taux <= 100);
	this->tauxInteret = taux;
}

void Banque::CompteE::calculInteret()
{
Mad* a=new Mad(this->tauxInteret / 100);
	this->Compte::crediter(&this->pourcentage(a));
}

void Banque::CompteE::consulter() const
{
	
		this->Compte::consulter();


}
