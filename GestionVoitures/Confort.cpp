//
//  Confort.cpp
//  GestionVoitures
//
//  Created by Fabio SARMENTO PEDRO on 26/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Confort.hpp"

Confort::Confort(string libelle, string matiereFauteuils, bool ordinateurDeBord)
{
    this->libelle = libelle;
    this->matiereFauteuils = matiereFauteuils;
    this->ordinateurDeBord = ordinateurDeBord;
}

Confort::~Confort()
{
    
}