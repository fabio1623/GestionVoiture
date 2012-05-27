//
//  CategorieVoiture.h
//  GestionVoitures
//
//  Created by Fabio SARMENTO PEDRO on 26/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef GestionVoitures_Categorie_h
#define GestionVoitures_Categorie_h

#include <iostream>
#include <string>

using namespace std;

#endif

class Categorie
{
    protected :
    
    string nom;
    int longueurMinimale;
    int longueurMaximale;
    int hauteurMinimale;
    int hauteurMaximale;
    int nbPlaces;
    
    public :
    
    Categorie(string nom, int longueurMinimale, int longueurMaximale, int hauteurMinimale, int hauteurMaximale, int nbPlaces);
    ~Categorie();
};