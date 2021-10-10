//
// Created by yacjne on 09/10/2021.
//

#ifndef UNTITLED_ETUDIANT_H
#define UNTITLED_ETUDIANT_H

#include <string>

using namespace std;

class Etudiant {

    private:
        string nom;
        string prenom;
        string specialite;

    public:

    Etudiant() = default;
    Etudiant(const Etudiant &toCopy);

    ~Etudiant() = default;

    string getNom() const;
    string getPrenom() const;
    string getSpecialite() const;

    virtual void saisie();

    virtual void affichage();

    void setNom(string n);
    void setPrenom(string p);
    void setSpecialite(string s);
};


#endif //UNTITLED_ETUDIANT_H
