//
// Created by yacjne on 10/10/2021.
//

#ifndef UNTITLED_RELEVE2NOTES_H
#define UNTITLED_RELEVE2NOTES_H

#include "Etudiant.h"
#include <vector>

class Releve2Notes : public Etudiant{

private:
    std::vector<string> unitesEnseingees;
    std::vector<double> notes;
    std::vector<int> coefficients;
    std::vector<int> credits;

    double moyduSemestre;
    int creditTotsem;
    double moyenneGen;
    int creditTot;
    string mention;

public:
    Releve2Notes();
    ~Releve2Notes() = default;

    void saisie() override;
    void affichage() override;

    double calculMoyduSemetre(vector<double> nts, vector<double> coeffs);
    void setMoyenneGen();
    void setCreditTotal(vector<double> nts, vector<int> crts);
    void setMention(double moyenneGen);
};


#endif //UNTITLED_RELEVE2NOTES_H
