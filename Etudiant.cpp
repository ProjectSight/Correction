//
// Created by yacjne on 09/10/2021.
//

#include "Etudiant.h"
#include <iostream>

Etudiant::Etudiant(const Etudiant &toCopy) {
    nom = toCopy.nom;
    prenom = toCopy.prenom;
    specialite = toCopy.specialite;
}

void Etudiant::saisie() {

    cout << "entrez le nom de l'etudiant \n";
    cin >> nom;

    cout << "entrez le prenom de l'etudiant \n";
    cin >> prenom;

    cout << "entrez la specialite de l'etudiant \n";
    cin >> specialite;

    cout << "informations ajoutees avec succes \n";
}

void Etudiant::affichage() {
    cout << nom << " " << prenom << " est inscrit(e) en " << specialite << " \n";
}

string Etudiant::getNom() const {
    return nom;
}

string Etudiant::getPrenom() const {
    return prenom;
}

string Etudiant::getSpecialite() const {
    return specialite;
}

void Etudiant::setNom(string n) {
    nom = n;
}

void Etudiant::setPrenom(string p) {
    prenom = p;
}

void Etudiant::setSpecialite(string s) {
    specialite = s;
}
