#pragma once
#include "Compte.h"
#include "Mad.h"
namespace Banque {
    class CompteE :
        public Compte
    {
    private:
        double tauxInteret;
    public:
        CompteE(Client* c, Devise* d, double taux);
        void calculInteret();
        void consulter() const override;
    };

}