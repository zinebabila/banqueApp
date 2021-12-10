#pragma once
#include "Devise.h"
#include <iostream>
using namespace std;
namespace Banque {
	class Mad :public  Devise
	{
	
	public:
		Mad(double a);
		 void convertto(char type) ;
		 void afficher() const override;
		 char type_devise() override;


	};

}

