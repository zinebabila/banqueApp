#include "Operation.h"
using namespace Banque;
int Operation::cpt = 0;
Banque::Operation::Operation(Devise*m, Date* d):num(++cpt)
{
	this->d = d;
	this->montant = m;
}
void Banque::Operation::afficher()
{
	this->d->afficher();
	cout << " | num : " << this->num << " || ";
	this->montant->afficher();
}
