#include "Compte.h"
#include "Operation.h"
#include "OperationA.h"
#include "OperationV.h"
#include <iostream>
using namespace std;
using namespace Banque;
Devise* Compte::plafond = new Mad(2000);
int Compte::countp = 0;

Banque::Compte::Compte(Client* titu,Devise* sol) :numcompte(++countp)
{
	this->titulaire = titu;
	this->solde = sol;
	this->historique = vector<Operation*>();
}


void Banque::Compte::consulter() const
{
	cout << "num compte=" << this->numcompte << endl;
	this->solde->afficher();
	cout << "titulaire " << endl;
	//this->titulaire->Afficher();
	cout << "historique des operation" << endl;
	for (int i = 0; i < this->historique.size(); i++)
	{
		this->historique[i]->afficher();
	}
}

Devise & Banque::Compte::pourcentage(Devise* aa) const
{
	if (this->solde->type_devise() == 'M') aa->convertto('M');
	if (this->solde->type_devise() == 'D') aa->convertto('$');
	if (this->solde->type_devise() == 'E') aa->convertto('E');
	aa->operator*(this->solde);
	return *aa;
}

bool Banque::Compte::checkSup(Devise* s,Devise*dec) const
{
	
	this->solde->operator-(s);
	if (*this->solde >= *dec)
	{
		this->solde->operator+(s);
		return true;
	}
	this->solde->operator+(s);
	return false;
	
}

Compte::~Compte() {

	if (this->titulaire != nullptr )
	{
		delete this->titulaire;
		this->titulaire = nullptr;
	}

}
void Banque::Compte::crediter(Devise* M)
{
	this->solde->operator+(M);
	Date* d = new Date();
	Operation* op = new OperationA(d, M);
	this->historique.push_back(op);
}

bool Banque::Compte::debiter(Devise* M)
{
	if (*(this->solde) >= *M && *M <= *(Compte::plafond))
	{
		this->solde->operator-(M);
		Date* d = new Date();
		Operation* op = new OperationV( M,d);
		this->historique.push_back(op);
		return true;
	}
	return false;
}

bool Banque::Compte::verser(Devise* M, Compte& C)
{
	if (this->debiter(M) == true) {
		C.crediter(M);
		return true;
	}
	return false;
	
}
