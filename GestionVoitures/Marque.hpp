//
//  Marque.h
//  GestionVoitures
//
//  Created by Fabio SARMENTO PEDRO on 26/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef GestionVoitures_Marque_h
#define GestionVoitures_Marque_h

#include <iostream>
#include <string>

using namespace std;

#endif

class Marque
{
    private :
    
    string nom;
    int anneeCreation;
    
    public :
    
    Marque(string nom, int anneeCreation);
    ~Marque();
};