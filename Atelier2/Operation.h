#pragma once
#include <iostream>
#include "Devise.h"
#include "Date.h"

using namespace std;
namespace Banque {
	class Operation
	{
	private:
		const int num;
		static int cpt;
		Devise* montant;
		Date* d;
	public:
		Operation(Devise*,Date*d);
		virtual void afficher()=0;


	};

}

