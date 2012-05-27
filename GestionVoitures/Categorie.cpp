//
//  Categorie.cpp
//  GestionVoitures
//
//  Created by Fabio SARMENTO PEDRO on 26/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Categorie.hpp"

Categorie::Categorie(string nom, int longueurMinimale, int longueurMaximale, int hauteurMinimale, int hauteurMaximale, int nbPlaces)
{
    this->nom = nom;
    this->longueurMinimale = longueurMinimale;
    this->longueurMaximale = longueurMaximale;
    this->hauteurMinimale = hauteurMinimale;
    this->hauteurMaximale = hauteurMaximale;
    this->nbPlaces = nbPlaces;
}
Categorie::~Categorie()
{
    
}
