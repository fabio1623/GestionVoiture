//
//  Moteur.h
//  GestionVoitures
//
//  Created by Fabio SARMENTO PEDRO on 26/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef GestionVoitures_Moteur_h
#define GestionVoitures_Moteur_h

#include <iostream>
#include <string>

using namespace std;

#endif

class Moteur
{
    private :
    
    int reference;
    int puissance;
    
    public :
    
    Moteur(int reference, int puissance);
    ~Moteur();
};