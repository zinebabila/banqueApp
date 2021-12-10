#include "Client.h"
#include <iostream>
#include "Compte.h"
using namespace Banque;
using namespace std;
Banque::Client::Client(string n, string p, string a)
{
	this->nom = n;
	this->prenom = p;
	this->adresse = a;
}

void Banque::Client::Afficher() const
{
	cout << "nom :" << this->nom << "\n" << "prenom:" << this->prenom << "\n" << "Adresse:" << this->adresse << endl;
	for (int i = 0; i < this->listeComptes.size(); i++)
	{
		this->listeComptes[i]->consulter();
	}
}

void Banque::Client::addCompte(Compte* c)
{
	this->listeComptes.push_back(c);
}
