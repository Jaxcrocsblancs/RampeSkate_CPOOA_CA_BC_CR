#ifndef DEF_COURS
#define DEF_COURS
#include <iostream>
#include <string>

class Cours{
  std::string nom;
  std::string dateInscriptionFin;
  int maxPersonne;
  /* Eleve[maxPersonne] tabEleve;
  ArrayList<Eleve> listeAttenteEleve;
  Enseignant prof;
  ArrayList<Ressources> listeRessources;*/

public:
  Cours(std::string nomCours, std::string dateFin, int nbMax);
  std::string getNom();
  std::string getDateInscriptionFin();
  int getNbMax();
  void ajouterEleve(Eleve el);
  void suppimerEleve(Eleve el);

  void changerProf(Enseigant en);

  void ajouterRessources(Ressources re);
  void supprimerRessources(Ressources re);


};

#endif
