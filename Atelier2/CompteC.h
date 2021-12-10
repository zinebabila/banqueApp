#pragma once
#include "Compte.h"
namespace Banque {
    class CompteC :
        public Compte
    {
    private:
        Devise* decouvet;
    public:
        CompteC(Client*, Devise*, Devise*);
        virtual bool debiter(Devise* M) ;
        virtual void crediter(Devise* M);
        void consulter() const override;

    };
}


