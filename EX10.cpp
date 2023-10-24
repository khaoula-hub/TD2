#include<iostream>
using namespace std;
class personne{
    private:
    char nom;
    char prenom;
    char date;
    public:
    personne(nom,prenom,date);
    void afficher();
};
personne::personne(nom,prenom,date){
    this->nom=nom;
    this->prenom=prenom;
    this->date=date;
}
void personne:: afficher(nom,prenom,date){
    cout<<"le nom de la personne est : "<<nom<<endl;
    cout<<"le prenom de la personne est : "<<nom<<endl;
    cout<<"le date de naissance de la personne est : "<<nom<<endl;
}
class employe: public personne{
    int salaire;
    public:
    employe( nom,prenom,date,salaire);
    void afficher();
};
employe(nom,prenom,date,salaire):personne(nom,prenom,date){
    this->salaire=salaire;
}
void employe::afficher(){
    cout<<nom<<endl;
    cout<<prenom<<endl;
    cout<<date<<endl;
    cout<<salaire<<endl;
}
class chef : public emmploye{
    char service;
    public:
    chef(nom,prenom, date, salaire,service);
    void afficher();
};
chef(nom,prenom, date, salaire,service):employe(nom,prenom,date,salaire){
    this->service=service;
}
void chef::afficher(){
    cout<<nom<<endl;
    cout<<prenom<<endl;
    cout<<date<<endl;
    cout<<salaire<<endl;
    cout<<service<<endl;
}
class directeur : public chef{
    char societe;
    public:
    directeur(nom,prenom, date, salaire,service,societe);
    void afficher();
};
directeur(nom,prenom, date, salaire,service,societe):chef(nom,prenom, date, salaire,service){
    this->societe=societe;
}
void chef::afficher(){
    cout<<nom<<endl;
    cout<<prenom<<endl;
    cout<<date<<endl;
    cout<<salaire<<endl;
    cout<<service<<endl;
    cout<<societe<<endl;
}
int main(){
    personne p1;
    
}