// Atelier2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Devise.h"
#include "Mad.h"
#include "Dollard.h"
#include "Euro.h"
#include "Client.h"
#include "Compte.h"
#include "CompteC.h"
#include "CompteE.h"
#include "CompteP.h"
#include "Date.h"

using namespace Banque;

int main()
{

	Client* c = new Client("Abila", "Zineb", "Casablanca");
	Devise* solde = new Mad(10000);
	Devise* dec = new Dollard(3000);
	Devise* s2 = new Mad(500000);
	Devise* s3 = new Euro(6000);
	Devise* s4 = new Mad(10);
	Compte* cmp = new CompteC(c, solde, dec);
	Compte* cmpp = new CompteP(c, s2);
	CompteE* compE = new CompteE(c, s4, 5);
	c->addCompte(cmp);
	c->addCompte(cmpp);
	c->addCompte(compE);
	cmp->crediter(s2);
	cmpp->debiter(s3);
	cmp->verser(s3, *compE);
	c->Afficher();



}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
