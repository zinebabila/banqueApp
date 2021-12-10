#include "Devise.h"
#include  <iostream>
using namespace std;
using namespace Banque;
Devise::Devise(double val)
{
	this->valeur = val;
}

void Devise::operator+( Devise* M) 
{
	this->valeur = this->valeur + M->valeur;
}

void Devise::operator-( Devise* M) 
{
	this->valeur = this->valeur - M->valeur;
}

void Banque::Devise::operator*(Devise* M)
{
	this->valeur = this->valeur * M->valeur;
}

void Banque::Devise::operator*(double d)
{
	this->valeur = this->valeur *d;
}



bool Devise::operator<=(const Devise& M) const
{
	return this->valeur <= M.valeur;
}

bool Devise::operator>=(const Devise& M) const
{
	return this->valeur >= M.valeur;
}

void Devise::afficher() const
{
	cout << "le solde est : " << this->valeur  ;
}

