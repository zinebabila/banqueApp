#pragma once
#include"Client.h"
#include "Devise.h"
#include "Operation.h"
#include "Mad.h"
class Operation;
namespace Banque {
	class Compte
	{
		//attributs
	private:
		const int numcompte;
		static int countp;
		Client* titulaire;//agregation
		Devise* solde;
		static Devise* plafond; //une valeur qu'on ne peut pas la depasser en cas de retrait
		vector<Operation*> historique;
								// Methodes
	public:
		Compte(Client*, Devise*); // avec parametres
		Compte(const Compte&);
		virtual void consulter()const=0;
		virtual void crediter(Devise* M);
		virtual  bool debiter(Devise* M);
		bool verser(Devise* M, Compte& C);
		~Compte();
	protected: Devise& pourcentage(Devise *aa) const;
	protected:bool checkSup(Devise* s, Devise* dec) const;
	
	};

};