//
// Created by yacjne on 10/10/2021.
//
#include <iostream>
#include "Releve2Notes.h"

using namespace std;

Releve2Notes::Releve2Notes(): Etudiant(), moyduSemestre(0), creditTot(0), creditTotsem(0), moyenneGen(0.0) {}

void Releve2Notes::saisie() {
    Etudiant::saisie();

    char action = 'A';
    string module;
    double note;
    int coefficient, credit;

    do{
        cout << "entrez le nom d'une UE (unite d'enseignement) \n";
        cin >> module;

        cout << "entrez la note pour l'UE : " << module << " \n";
        cin >> note;

        while(!cin){
            cin.clear();
            cin.ignore();
            cout << "entrez la note pour l'UE : " << module << " \n";
            cin >> note;
        }

        cout << "entrez le coefficient pour l'UE : " << module << " \n";
        cin >> coefficient;

        while(!cin){
            cin.clear();
            cin.ignore();
            cout << "entrez le coefficient pour l'UE : " << module << " \n";
            cin >> coefficient;
        }


        cout << "entrez le credit pour l'UE : " << module << " \n";
        cin >> credit;

        while(!cin){
            cin.clear();
            cin.ignore();
            cout << "entrez le credit pour l'UE : " << module << " \n";
            cin >> credit;
        }

        unitesEnseingees.push_back(module);
        notes.push_back(note);
        coefficients.push_back(coefficient);
        credits.push_back(credit);

        cout << "ajouter (A) ou Quitter (Q) ? \n";
        cin >> action;
        if(action == 'Q') break;

    }while (true);
}

void Releve2Notes::affichage() {
    Etudiant::affichage();

    for(int i = 0; i < unitesEnseingees.size(); i++){
        cout << "UE : " << unitesEnseingees[i] << " note : " << notes[i] << " coefficient : " << coefficients[i] << " credit : " << credits[i] << " \n";
    }
}

double Releve2Notes::calculMoyduSemetre(vector<double> nts, vector<double> coeffs) {
    double total = 0;

    for (int i = 0; i < nts.size(); ++i) {
        total+= nts[i] * coeffs[i];
    }

    return total;
}

void Releve2Notes::setMoyenneGen() {
 // pas compris la fonction !! on ne peut pas savoir les semestres !!
}

void Releve2Notes::setCreditTotal(vector<double> nts, vector<int> crts) {
    for (int i = 0; i < nts.size(); ++i) {
        if(nts[i] >= 10){
            creditTot += crts[i];
        }
    }
}

void Releve2Notes::setMention(double moyenneGenerale) {
    if(moyenneGen >= 10){
        mention = "admis(e)";
        creditTot = 60;

        return;
    }

    if(creditTot >= 45){
        mention = "admis(e) avec dettes";

        return;
    }

    mention = "ajourne(e)";
}

