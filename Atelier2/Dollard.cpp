#include "Dollard.h"
#include <iostream>
using namespace std;
using namespace Banque;
Banque::Dollard::Dollard(double a):Devise(a)
{
}

void Banque::Dollard::convertto(char type)
{
	if (type == 'e') {
		this->Devise::operator*(new Dollard(0.88));
	}
	if (type == 'd') {
		this->Devise::operator*(new Dollard(9.19));
	}
}

void Banque::Dollard::afficher() const
{
	this->Devise::afficher();
	cout << "$" << endl;

}

char Banque::Dollard::type_devise()
{
	return'D';
}
