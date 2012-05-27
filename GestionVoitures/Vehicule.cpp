//
//  Voiture.cpp
//  GestionVoitures
//
//  Created by Fabio SARMENTO PEDRO on 26/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Vehicule.hpp"


Vehicule::Vehicule(Marque marque, Categorie categorie, Confort confort, Moteur moteur, string nom, int poids, int vitesseMaximale, int acceleration, int prix)
{
    this->marque = marque;
    this->categorie = categorie;
    this->confort = confort;
    this->moteur = moteur;
    this->nom = nom;
    this->poids = poids;
    this->vitesseMaximale = vitesseMaximale;
    this->acceleration = acceleration;
    this->prix = prix;
}

Vehicule::~Vehicule()
{
    
}

bool	Vehicule::operator==(Vehicule const& other)
{
	if (this->marque == other.marque &&
		this->categorie == other.categorie &&
		this->confort == other.confort &&
		this->moteur == other.moteur &&
		this->nom == other.nom &&
		this->poids == other.poids &&
		this->vitesseMaximale == other.vitesseMaximale &&
		this->acceleration == other.acceleration &&
		this->prix == other.prix)
		return (true);
	return (false);
}