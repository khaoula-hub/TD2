#include <iostream>

class Fichier {
private:
    char* P;        
    int longueur; 
public:
    Fichier(int taille);
    void Creation(int taille);
    void Remplit();
    void Affiche();
    ~Fichier();


};
Fichier::Fichier(int taille){
    longueur = taille;
    P = new char[longueur];
void Fichier:: Creation(int taille) {
    if (P) {
    delete[] P;
    }
        longueur = taille;
        P = new char[longueur];
    }
}
void Fichier:: Remplit() {
    for (int i = 0; i < longueur; i++) {
        P[i] = 'A' + i % 26; 
        }
    }
    void Affiche() {
    for (int i = 0; i < longueur; i++) {
           cout << P[i]<<endl;;
        }
    }
~Fichier::Fichier() {
        if (P) {
            delete[] P;
        }
    }

int main() {
    Fichier* Fichier1 = new Fichier(10); 

    Fichier1->Remplit();
    Fichier1->Affiche();

    Fichier1->Creation(5); 
    Fichier1->Remplit(); 
    Fichier1->Affiche();

    delete Fichier1; 

    return 0;
}
