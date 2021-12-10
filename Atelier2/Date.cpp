#include <iostream>
#include <ctime> 
#include "Date.h"
using namespace std;
Date::Date()

{
	time_t t = time(0);
	tm* now = new tm();
	localtime_s(now, &t);
	this->h = now->tm_hour;
	this->mi = now->tm_min;
	this->s = now->tm_sec;
	this->j = now->tm_mday;
	this->m = now->tm_mon;
	this->annee = now->tm_year;
}

void Date::afficher()
{
	cout << this->h << ":" << this->mi << ": " << this->s << " ";
	cout << this->j << " /" << this->m << " /" << this->annee << "|| ";
}
