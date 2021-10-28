#include "intervalle.h"
#include <iostream>
#include "Intervalle.h"
using namespace INterv;
using namespace std; 
// Constructeur (pour initialiser)avec deux parametre
INterv::Intervalle::Intervalle(double a, double b)
{
    if (a < b) {
        
        this->minimum = a;
        this->maximum = b;
    }
    else {
        this->minimum = b;
        this->maximum = a;
    }


}
// Methode qui nous retourne le minimum de l'intervalle
double INterv::Intervalle::min()
{
    return this->minimum;

}
// Methode qui nous retourne le maximum de l'intervalle
double INterv::Intervalle::max()
{
    return this->maximum;
}

bool INterv::Intervalle::operator[](double m)
{
    if (m <= this->maximum && m >= this->minimum)
        return true;
    return false;
}


// Affichage de l'intervalle
void INterv::Intervalle::consulter()
{
    cout << "[" << this->minimum << "," << this->maximum<< "]" << endl;
}




Intervalle& INterv::Intervalle::operator|(Intervalle &i)
{
    Intervalle* newIn;
    newIn = new Intervalle(0, 0);
   
    if (this->maximum > i.maximum)
        newIn->maximum = this->maximum;
    else
    {
        newIn->maximum = i.maximum;
    }

    if (this->minimum > i.minimum)
        newIn->minimum = i.minimum;
    else
    {
        newIn->minimum = this->minimum;
    }
    return *newIn;
}

bool INterv::Intervalle::operator=(Intervalle m)
{
    if (this->maximum == m.maximum && this->minimum == m.minimum)
        return true;

    return false;
}

Intervalle& INterv::Intervalle::operator+(Intervalle& i)
{
    Intervalle intlocal(this->minimum, this->maximum);
    Intervalle* newIn = new Intervalle(0, 0);
    if ( intlocal[i.minimum] || intlocal[i.maximum])
    {
        newIn->minimum = (i.minimum > this->minimum) ? i.minimum : this->minimum;
        newIn->maximum = (i.maximum > this->maximum) ? this->maximum :i.maximum;
        return *newIn;
    }



}


