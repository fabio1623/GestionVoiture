//
//  Voiture.h
//  GestionVoitures
//
//  Created by Fabio SARMENTO PEDRO on 26/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef GestionVoitures_Voiture_h
#define GestionVoitures_Voiture_h

#include <iostream>
#include <string>
#include "Categorie.h"
#include "Marque.h"
#include "Moteur.h"
#include "Confort.h"

using namespace std;

#endif


class Voiture
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
    
    Voiture()
    {

    }
    ~Voiture()
    {
        
    }
    
    bool ajouterVoiture();
    bool supprimerVoiture();
    void afficherVoiture();
    Voiture rechercherVoiture(); 
};
