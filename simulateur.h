#ifndef SIMULATEUR_H
#define SIMULATEUR_H

#include "Reservoir.h"
#include "Pompe.h"
#include "Vanne.h"
#include "Moteur.h"
#include <QWidget>
#include  <QDebug>
#include <QMessageBox>
#include <QDebug>

#include <iostream>

#define MAX13 120
#define MAX2 90
class Simulateur
{
    friend class Window2;
 private :
   Moteur *m1;
   Moteur *m2;
   Moteur *m3;

   Pompe* p11;
   Pompe* p12;
   Pompe* p21;
   Pompe* p22;
   Pompe* p31;
   Pompe* p32;

   Reservoir *r1;
   Reservoir *r2;
   Reservoir *r3;

   Vanne *VT12;
   Vanne *VT23;
   Vanne *V12;
   Vanne *V13;
   Vanne *V23;

   string nom;

public slots :


    //infos Vannes
    void infoVanneVT12( );
    void infoVanneVT23();
    void infoVanneV12();
    void infoVanneV13();
    void infoVanneV23();

    void  infoPompe12();
    void  infoPompe22();
    void  infoPompe32();

    void ex_vidangeR1();
    void ex_vidangeR2();
    void ex_vidangeR3();

    void ex_pannepompe11();
    void ex_pannepompe12();
    void ex_pannepompe21();
    void ex_pannepompe22();
    void ex_pannepompe31();
    void ex_pannepompe32();




public :
    Simulateur(string nom);
   // Simulateur(Moteur * m1, Moteur * m2, Moteur *m3 );
    ~Simulateur();
    //permet d'equilibrer les reservoirs
    void equilibre_res();

    int getEtatVanneVT12();
    int getEtatVanneVT23();
    int getEtatVanneV12();
    int getEtatVanneV13();
    int getEtatVanneV23();



    int  getEtatPompep11();
    int  getEtatPompep12();
    int  getEtatPompep21();
    int  getEtatPompep22();
    int  getEtatPompep31();
    int  getEtatPompep32();


    int  getEtatReservoirR1();
    int  getEtatReservoirR2();
    int  getEtatReservoirR3();

    int getPompeM1();
    int getPompeM2();
    int getPompeM3();
    QString getResM1();
    QString getResM2();
    QString getResM3();

    QString getEtat();
};

#endif // SIMULATEUR_H
