//
//  Confort.h
//  GestionVoitures
//
//  Created by Fabio SARMENTO PEDRO on 26/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef GestionVoitures_Confort_h
#define GestionVoitures_Confort_h

#include <iostream>
#include <string>

using namespace std;

#endif

class Confort
{
    private :
    
    string libelle;
    string matiereFauteuils;
    bool ordinateurDeBord;
    
    public :
    
    Confort(string libelle, string matiereFauteuils, bool ordinateurDeBord);
    ~Confort();
};