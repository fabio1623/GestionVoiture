//
//  Voiture.h
//  GestionVoitures
//
//  Created by Fabio SARMENTO PEDRO on 26/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef GestionVoitures_Vehicule_h
#define GestionVoitures_Vehicule_h

#include <iostream>
#include <string>
#include "Categorie.h"
#include "Marque.h"
#include "Moteur.h"
#include "Confort.h"

using namespace std;

#endif


class Vehicule
{
    private :
    
    Marque marque;
    Categorie categorie;
    Confort confort;
    Moteur moteur;
    string nom;
    int poids;
    int vitesseMaximale;
    int acceleration;
    int prix;
    
    public :
    
    Vehicule(Marque marque, Categorie categorie, Confort confort, Moteur moteur, string nom, int poids, int vitesseMaximale, int acceleration, int prix);
    ~Vehicule();
};
