#include "Mad.h"
#include <iostream>
using namespace std;
using namespace Banque;
Banque::Mad::Mad(double a):Devise(a)
{
}

void Banque::Mad::convertto(char type)
{
	if (type == '$') {
		 this->Devise::operator*(new Mad(0.11));
	}
	if (type == 'e') {
		 this->Devise::operator*(new Mad(0.096));
	}
	
}

void Banque::Mad::afficher() const
{
	this->Devise::afficher();
	cout << "dh" << endl;
}

char Banque::Mad::type_devise()
{
	return 'M';
}


