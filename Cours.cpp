#include <iostream>
#include <string>
#include "Cours.hpp"

Cours::Cours(std::string nomCours, std::string dateFin, int nbMax){
  nom = nomCours;
  dateInscriptionFin = dateFin;
  maxPersonne = nbMax;
}
  
std::string Cours::getNom(){
  return nom;
}
  
std::string Cours::getDateInscriptionFin(){
  return dateInscriptionFin;
}

int Cours::getNbMax(){
  return maxPersonne;
}


int main()
{
  
  std::string nom= "fr";
  std::string date="10/10/10";
  Cours c(nom,date,10);
  std::cout << c.getNom() << " "<< c.getDateInscriptionFin() << " " << c.getNbMax() << std::endl;
  
  return 0;
}
