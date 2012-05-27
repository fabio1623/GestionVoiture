//
//  Concessionaire.h
//  GestionVoitures
//
//  Created by Adnan RIHAN on 26/05/12.
//  Copyright (c) 2012 Virtual-Info. All rights reserved.
//

#ifndef GestionVoitures_Concessionaire_h
#define GestionVoitures_Concessionaire_h

#include <iostream>
#include <string>
#include "Vehicule.hpp"

Class Concessionaire
{
 private:
  string		nom;
  string		adresse;
  vector<Vehicule>	vehicules;

 public:
  Concessionaire(string nom, string adresse);
  ~Concessionaire();
  string		getNom(void);
  void			setNom(string newNom);
  string		getAdresse(void);
  void			setAdresse(string newAdresse);
  vector<Vehicule>	&getVehicules(void);
  bool			ajouterVehicule(Vehicule &v);
  bool			supprimerVehicule(Vehicule &v);
  bool			supprimerVehicule(int id);
  int			rechercherVehicule(Vehicule &v);
};

#endif
