#ifndef _POMPE_H
#define _POMPE_H

#include <iostream>
#include <QString>
#include <QDebug>
using namespace std;

class Pompe{
    friend class Reservoir;

private:

        //etat égal à 1 si la pompe est en marche, à 0 si la pompe est à l'arrêt, à -1 si elle est en panne
    int etat;
    QString nom;

public:

        //constructeur de la classe pompe qui prend en argument l'état initial de la pompe
    Pompe( QString nom="",int e=0);

        //permet d'activer ou de desactiver la pompe
    void power();

        //permet de déclancher une panne
    void panne();

    int get_etat();

        //destructeur de la classe Pompe
    ~Pompe();

};

#endif
