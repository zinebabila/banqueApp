#pragma once
namespace Banque {
	class Devise
	{
	private:
		double valeur;
	public:
		Devise(double val);
	    void operator+( Devise* M) ;
		void operator-( Devise* M) ;
		 void operator*(Devise* M);
		void operator*( double d)  ;
	    bool operator<=(const Devise& M)const;
		bool operator>=(const Devise& M) const;
		virtual void convertto(char type) = 0;
		virtual char type_devise() = 0;
		virtual void afficher() const;

	};
}


