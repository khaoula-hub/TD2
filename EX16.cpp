#include <iostream>
struct Element {
    int valeur;
    Element* suivant;
};

class Liste {
private:
    Element* premier;
public:
   
    void ajouterAuDebut(int valeur);
    void supprimerDuDebut();
    void afficherListe();
    ~Liste();
};
void Liste::ajouterAuDebut(int valeur) {
        Element* nouvelElement = new Element;
        nouvelElement->valeur = valeur;
        nouvelElement->suivant = premier;
        premier = nouvelElement;
    }
void Liste::supprimerDuDebut() {
        if (premier) {
            Element* aSupprimer = premier;
            premier = premier->suivant;
            delete aSupprimer;
        }}
void Liste::afficherListe() {
        Element* courant = premier;
        while (courant) {
            cout << courant->valeur << " ";
            courant = courant->suivant;
        }
    }
~Liste::Liste() {
        while (premier) {
            Element* aSupprimer = premier;
            premier = premier->suivant;
            delete aSupprimer;
        }
    }
int main() {
    Liste Liste1;

    Liste1.ajouterAuDebut(10);
    Liste1.ajouterAuDebut(20);
    Liste1.ajouterAuDebut(30);

    std::cout << "Liste : ";
    Liste1.afficherListe();

    Liste1.supprimerDuDebut();
    std::cout << "Après suppression : ";
    Liste1.afficherListe();

    return 0;
}
