#pragma once
#include "Devise.h"
namespace Banque {
    class Euro :
        public Devise
    {
    public:
        Euro(double a);
        void convertto(char type);
        void afficher() const override;
        char type_devise() override;
    };
}


