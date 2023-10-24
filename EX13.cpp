#include<iostream>
using namespace std;
class point{
    private:
    float x;
    float y;
    public:
    point(x,y);
    void afficher();
    void deplacer(x,y);
    
};
point::point(x,y){
    this->x=x;
    this->y=y;
}
void point:: afficher(){
    cout<<"("<<x<<","<<y<<")"<<endl;
}
void point::deplacer(x,y){
    this->x=x;
    this->y=y;
}
int main(){
    float x;
    float y;
    point p1;
    p1.point(x,y);
    p1.afficher();
    p1.deplacer(x,y);

cout<<"Entrer les cordonnées du point"<<endl;
cin>>x;
cin>>y;
p1.afficher();
return 0;
}