//
//  Concessionaire.cpp
//  GestionVoitures
//
//  Created by Fabio SARMENTO PEDRO on 26/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "Concessionaire.hpp"

Concessionaire::Concessionaire(string nom, string adresse)
{
  this->nom = nom;
  this->adresse = adresse;
}

~Concessionaire::Concessionaire()
{
}

string	Concessionaire::getNom(void)
{
  return (this->nom);
}

void	Concessionaire::setNom(string newNom)
{
  this->nom = newNom;
}

string	Concessionaire::getAdresse(void)
{
  return (this->adresse);
}

void	Concessionaire::setAdresse(string newAdresse);

vector<Vehicule>	&getVehicules(void)
{
  return (this->vehicules);
}

bool	Concessionaire::ajouterVehicule(Vehicule &v)
{
  if (this->rechercherVehicule(v) != -1) // Existe
    return (FALSE);

  this->vehicules.push_back(v);
  return (TRUE);
}

bool	Concessionaire::supprimerVehicule(Vehicule &v)
{
  return (FALSE);
}

bool	Concessionaire::supprimerVehicule(int id)
{
  return (FALSE);
}

int	Concessionaire::rechercherVehicule(Vehicule &v)
{
  unsigned int	i;
  unsigned int	nVehicule = this->vehicules.size();

  for (i=0;i<nVehicule;i++)
  {
    if (this->vehicules.at(i) == v)
      return (i);
  }
  return (-1);
}
