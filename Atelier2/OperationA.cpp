#include "OperationA.h"

Banque::OperationA::OperationA(Date* d, Devise* montant):Operation(montant,d)
{
	this->libelle = '+';
}

void Banque::OperationA::afficher()
{

	cout << ' + ';
	this->Operation::afficher();
	
}
