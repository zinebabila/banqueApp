#pragma once
#include "Devise.h"
namespace Banque {
    class Dollard :
        public Devise
    {
    public:
        Dollard(double a);
        void convertto(char type);
        void afficher() const override;
        char type_devise() override;
    };
}


