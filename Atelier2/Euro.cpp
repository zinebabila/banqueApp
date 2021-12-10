#include "Euro.h"
#include <iostream>
using namespace std;
using namespace Banque;
Banque::Euro::Euro(double a):Devise(a)
{
}

void Banque::Euro::convertto(char type)
{
	if (type == '$') {
		this->Devise::operator*(new Euro(1.13));
	}
	if (type == 'd') {
		this->Devise::operator*(new Euro(10.40));
	}
}

void Banque::Euro::afficher() const
{
	this->Devise::afficher();
	cout << "E" << endl;
}

char Banque::Euro::type_devise()
{
	return'E';
}
