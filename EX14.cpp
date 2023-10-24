#include <iostream>
#include <vector>

class Pile {
    private:
    vector<int> pile;

public:
    Pile() {}
    void push(int element);
    int pop() {
        if (!estVide()) {
            int sommet = pile.back();
            pile.pop_back();
            return sommet;
        } else {
            cerr << "La pile est vide, impossible de dépiler." <<endl;
            return -1; 
        }
    }
    bool estVide() const {
        return pile.empty();}
};
pile::pile(){}
void pile::push(int element) {
        pile.push_back(element);
    }
int pile:: pop() {
        if (!estVide()) {
            int sommet = pile.back();
            pile.pop_back();
            return sommet;
        } else {
            cerr << "La pile est vide, impossible de dépiler." <<endl;
            return -1; 
        }
        int main() {
    Pile p1;
    Pile p2;

    // Empilez des valeurs sur p1
    p1.push(10);
    p1.push(20);
    p1.push(30);

    // Empilez des valeurs sur p2
    p2.push(5);
    p2.push(15);

    // Dépilez et affichez les éléments de p1
    while (!p1.estVide()) {
        std::cout << "Élément dépiler de p1 : " << p1.pop() << std::endl;
    }

    // Dépilez et affichez les éléments de p2
    while (!p2.estVide()) {
        std::cout << "Élément dépiler de p2 : " << p2.pop() << std::endl;
    }

    return 0;
}


int main() {
    vector<int> pile1;
    pile1.push_back(10);
    pile1.push_back(20);
    pile1.push_back(30);
    
    for (int element : pile1) {
        cout << element << " ";
    }
    
    return 0;
}





