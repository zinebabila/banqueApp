#pragma once
#include "CompteC.h"
namespace Banque {
    class CompteP :
        public Compte
    {
    private:
        static double coutop;
    public:
        CompteP(Client* c, Devise* m);
        bool debiter(Devise* M) override;
        void crediter(Devise* M) override;
        void consulter() const override;
    };
}
