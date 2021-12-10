#include "OperationV.h"



Banque::OperationV::OperationV(Devise* d, Date* c):Operation(d,c)
{
	this->libelle = '-';
}

void Banque::OperationV::afficher()
{
	cout << '-';
	this->Operation::afficher();

}
