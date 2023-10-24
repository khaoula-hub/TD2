#include<iostream>
using namespace std;
class animal{
    private:
    char nom;
    int age;
    public:
    void getnom();
    void getage();
    char set_value(nom);
    int  set_value(age);
    
};
char animal::set_value(nom){
    this->nom=getnom();
}
int animal::set_value(age){
    this->nom=getage();
}
char animal::getnom(){
    return this->nom;
}
int animal::getage(){
    return this->age;
}
class zebra : public animal{
    cout<<"le nom de cet animal est :"<<this->nom;
    cout<<"l'age' de cet animal est :"<<this->age;
}
class dolphin : public animal{
    cout<<"le nom de cet animal est :"<<this->nom;
    cout<<"l'age' de cet animal est :"<<this->age;
}
int main(){
    zebra a1;
    dolphin a2;
    a1.getnom();
    a1.getage();
    a2.getnom();
    a2.getage();
    
}